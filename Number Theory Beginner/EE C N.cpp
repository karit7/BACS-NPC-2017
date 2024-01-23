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
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int x, y;
    int g = ee(a, b, x, y);
    if(c % g)
        return 0;
    for(int i = 1; i <= n; i++)
        cout << (x + i * (b / g)) * (c / g) << " " << (y - i * (a / g)) * (c / g) << "\n";
    return 0;
}