#include <bits/stdc++.h>
using namespace std;

const int sz = 1e3 + 2;

bool mr[sz];
vector<int> pr;
void seive(int n){
    int sq = sqrt(n) + 1;
    for(int i = 3; i <= sq; i += 2){
        if(!mr[i]){
            for(int j = i * i; j <= n; j += i + i){
                mr[j] = true;
            }
        }
    }
    if(n == 1)
        return;
    pr.push_back(2);
    for(int i = 3; i <= n; i += 2)
        if(!mr[i])
            pr.push_back(i);

}
int nod(int n){
    int tot = 1, sq = sqrt(n) + 1;
    for(int i = 0; i < (int)pr.size() && pr[i] <= sq; i++){
        if(n % pr[i] == 0){
            int exp = 0;
            while(n % pr[i] == 0){
                exp++;
                n /= pr[i];
            }
            tot *= (exp + 1);
        }
    }
    if(n > 1)
        tot *= 2;
    return tot;
}

int main(){
    int n;
    cin >> n;
    seive(n);
    cout << nod(n) << "\n";
    return 0;
}