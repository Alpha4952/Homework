#include <bits/stdc++.h>
using namespace std;

long long t, a, b;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("MissNums.inp", "r", stdin);
    freopen("MissNums.out", "w", stdout);

    cin >> t;
    for (int _ = 0; _ < t; _++) {
        cin >> a >> b;

        if (a == 9 && b == 1) cout << 9 << " " << 10 << '\n';
        else {
            if (a > b) cout << -1 << " " << -1 << '\n';
            else if (a == b) cout << a << 0 << " " << b << 1 << '\n';
            else if (a + 1 == b) cout << a << " " << b << '\n';
            else cout << -1 << " " << -1 << '\n';
        }
    }

    return 0;
}