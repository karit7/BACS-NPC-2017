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
    int a, b, c;
    cin >> a >> b >> c;
    int x, y;
    int g = ee(a, b, x, y);
    if(c % g)
        return 0;
    cout << x * (c / g) << " " << y * (c / g);
    return 0;
}