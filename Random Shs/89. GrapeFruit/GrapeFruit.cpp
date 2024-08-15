#include <bits/stdc++.h>
using namespace std;

long long a, b, c, g, temp;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("GrapeFruit.inp", "r", stdin);
    freopen("GrapeFruit.out", "w", stdout);

    cin >> a >> b >> c;
    g = a / c + b / c;
    a %= c;
    b %= c;

    if (a + b >= c) {
        if (a >= b) {
            temp = b;
            a += b;
            g += a / c;
            a %= c;

            cout << g << " " << temp - a << endl;
        } else {
            temp = a;
            b += a;
            g += b / c;
            b %= c;

            cout << g << " " << temp - b << endl;
        }
    } else {
        cout << g << " " << 0 << endl;
    }
}