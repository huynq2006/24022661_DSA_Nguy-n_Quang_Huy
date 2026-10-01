#include <iostream>
#include <cmath>

using namespace std;

int gcd(int x, int y) {
    while (y != 0) {
        int r = x % y;
        x = y;
        y = r;
    }
    return x;
}

void rutGonPhanSo(int &a, int &b) {
    if (b == 0) return; 
    int ucln = abs(gcd(a, b));
    a /= ucln;
    b /= ucln;
    if (b < 0) {
        a = -a;
        b = -b;
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    rutGonPhanSo(a, b);
    cout << a << "/" << b << "\n";
    return 0;
}