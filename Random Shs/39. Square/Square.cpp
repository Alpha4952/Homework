#include <bits/stdc++.h>
using namespace std;

int a, b, c, d;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("Square.inp", "r", stdin);
    freopen("Square.out", "w", stdout);

    cin >> a >> b >> c >> d;

    if (abs (a-c) == abs(b-d)) cout << a << " " << d << " " << c << " " << b << endl;
    else if (a == c) cout << a + b - d << " " << b << " " << a + b - d << " " << d << endl;
    else if (b == d) cout << a << " " << b + a - c << " " << c << " " << d + a - c << endl;
    else cout << -1 << endl;
    
    return 0;
}
