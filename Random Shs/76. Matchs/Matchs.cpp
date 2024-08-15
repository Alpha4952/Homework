#include <bits/stdc++.h>
using namespace std;

long long t, n;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Matchs.inp", "r", stdin);
    freopen("Matchs.out", "w", stdout);

    cin >> t;
    for (int _ = 0; _ < t; _++) {
        cin >> n;

        if (n == 0) cout << 4 << '\n';
        else if (n == 1) cout << 3 << '\n';
        else if (n == 2) cout << 2 << '\n';
        else if (n % 2) cout << 1 << '\n';
        else cout << 0 << '\n';
    }

    return 0;
}