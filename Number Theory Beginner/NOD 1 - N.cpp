#include <bits/stdc++.h>
using namespace std;

const int sz = 1e3 + 2;

int nod[sz];
void nod_1_to_n(int n){
    int tot = 1;
    for(int i = 2; i <= n; i++){
        if(nod[i] == 1){
            for(int j = i; j <= n; j += i){
                int x = j, exp = 0;
                while(x % i == 0){
                    exp++;
                    x /= i;
                }
                nod[j] *= (exp + 1);
            } 
        }
    }
}

int main(){
    int n;
    cin >> n;
    fill(nod, nod + n + 1, 1);
    nod_1_to_n(n);
    for(int i = 1; i <= n; i++)
        cout << nod[i] << "\n";
    return 0;
}