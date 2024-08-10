#include <bits/stdc++.h>
using namespace std;

int a, b, c, d;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    freopen("aprog.inp", "r", stdin);
    freopen("aprog.out", "w", stdout);
    cin >> a >> b >> c;

    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);

    d = c + (c - b);
    if (a - b == b - c && b - c == c - d) return cout << d, 0;

    d = b + (b - a);
    if (a - b == b - d && b - d == d - c) return cout << d, 0;

    d = a + (c - b);
    if (a - d == d - b && d - b == b - c) return cout << d, 0;
    return 0;
}
