#include <bits/stdc++.h>
using namespace std;

const int sz = 1e3 + 2;

int phi[sz];
void eular_1_to_n(int n){
    for(int i = 2; i <= n; i++){
        if(phi[i] == i){
            for(int j = i; j <= n; j += i){
                phi[j] -= phi[j] / i;
            }
        }
    }
}

int main(){
    int n;
    cin >> n;
    iota(phi, phi + n + 1, 0);
    eular_1_to_n(n);
    for(int i = 1; i <= n; i++){
        cout << phi[i] << "\n";
    }
    return 0;
}