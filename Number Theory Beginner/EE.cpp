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
    int a, b;
    cin >> a >> b;
    int x, y;
    ee(a, b, x, y);
    cout << x << " " << y;
    return 0;
}