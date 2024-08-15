#include <bits/stdc++.h>
using namespace std;

long long t, n, m, f, r;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("BookReading.inp", "r", stdin);
    freopen("BookReading.out", "w", stdout);

    cin >> t;
    while (t--) {
        cin >> n >> m;

        f = 0;
        for (int i = 1; i <= 9; i++) {
            f += m * i % 10;
        }

        r = n / m / 10 * f;

        for (int i = 1; i <= n / m % 10; i++) {
            r += m * i % 10;
        }

        cout << r << '\n';
    }
}