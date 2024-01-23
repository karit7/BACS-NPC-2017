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

int main(){
    int n;
    cin >> n;
    seive(n);
    for(auto i : pr){
        cout << i << "\n";
    }
    return 0;
}