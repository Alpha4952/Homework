#include <bits/stdc++.h>
using namespace std;

long long t, x, y;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("MagicStick.inp", "r", stdin);
    freopen("MagicStick.out", "w", stdout);

    cin >> t;
    for (int _ = 0; _ < t; _++) {
        cin >> x >> y;

        if (x == y) cout << "YES" << '\n';
        else if (y == 0) cout << "NO" << '\n';
        else if (x == 1) cout << "NO" << '\n';
        else if (x == 2 || x == 3) {
            if (y >= 1 && y <= 3) cout << "YES" << '\n';
            else cout << "NO" << '\n';
        } else cout << "YES" << '\n';
    }

    return 0;
}