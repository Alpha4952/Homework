#include <bits/stdc++.h>
using namespace std;

long long t, n, a, b;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("BuyCream.inp", "r", stdin);
    freopen("BuyCream.out", "w", stdout);

    cin >> t;
    while (t--) {
        cin >> n >> a >> b;

        cout << max(a, b) - ((a + b) - n) + 1 << '\n';
    }

    return 0;
}