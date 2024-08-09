#include <bits/stdc++.h>
using namespace std;

int a, b, c, d;
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("Square.INP", "r", stdin);
    freopen("Square.OUT", "w", stdout);
    cin >> a >> b >> c >> d;
    if (a != c && b != d) {
        if (abs(c - a) != abs(d - b)) cout << -1;
        else cout << a << " " << d << " " << c << " " << b;
        return 0;
    }
    if (a == c && b == d) cout << -1;
    if (a == c) {
        cout << a + abs(d - b) << " " << b << " " << c + abs(d - b) << " " << d;
        return 0;
    }
    if (b == d) {
        cout << a << " " << b + abs(a - c) << " " << c << " " << d + abs(a - c);
        return 0;
    }
}
