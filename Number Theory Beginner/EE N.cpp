#include <bits/stdc++.h>
using namespace std;

int ee(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = ee(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    int x, y;
    int g = ee(a, b, x, y);
    for(int i = 1; i <= n; i++)
        cout << x + i * (b / g) << " " << y - i * (a / g) << "\n";
    return 0;
}