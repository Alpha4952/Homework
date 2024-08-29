#include <bits/stdc++.h>
using namespace std;

long long t, n, a, minv, cv;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("MinSumOfNeg.inp", "r", stdin);
    freopen("MinSumOfNeg.out", "w", stdout);

    cin >> t;
    while (t--) {
        cin >> n;

        minv = 0; cv = 0;
        for (int i = 0; i < n; i++) {
            cin >> a;

            if (a < 0) cv += a;
            if (a >= 0 || i == n - 1) {
                minv = min(minv, cv);
                cv = 0;
                continue;
            }
        }

        cout << minv << '\n';
    }
}