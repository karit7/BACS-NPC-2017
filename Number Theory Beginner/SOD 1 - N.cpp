#include <bits/stdc++.h>
using namespace std;

const int sz = 1e3 + 2;

int sod[sz];
void sod_1_to_n(int n){
    int tot = 1;
    for(int i = 2; i <= n; i++){
        if(sod[i] == 1){
            for(int j = i; j <= n; j += i){
                int x = j, exp = 0;
                while(x % i == 0){
                    exp++;
                    x /= i;
                }
                sod[j] *= (pow(i, exp + 1) - 1) / (i - 1);
            } 
        }
    }
}

int main(){
    int n;
    cin >> n;
    fill(sod, sod + n + 1, 1);
    sod_1_to_n(n);
    for(int i = 1; i <= n; i++)
        cout << sod[i] << "\n";
    return 0;
}