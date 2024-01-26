#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int sz = 1e3 + 2;

bool mr[sz];
int mu[sz];
void mu_1_to_n(int n){
    for(int i = 2; i <= n; i++){
        if(!mr[i]){
            for(int j = i; j <= n; j += i){
                if(j > i)
                    mr[j] = true;
                if(j % (i * i) == 0)
                    mu[j] = 0;
                else 
                    mu[j] = -mu[j];
            }
        }
    }
}

int32_t main(){
    int n;
    cin >> n;
    fill(mu, mu + n + 1, 1);
    mu_1_to_n(n);
    int c = 0;
    for(int i = 1; i <= n; i++)
        c += mu[i] * (n / (i * i)) * (n / (i * i));
    cout << c;
    return 0;
}