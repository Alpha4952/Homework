#include <bits/stdc++.h>
using namespace std;

long long t, n, c;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("SumDigits.inp", "r", stdin);
    freopen("SumDigits.out", "w", stdout);

    cin >> t;
    while (t--) {
        cin >> n;

        c = 0;

        for (int i = 1; i <= 9; i++) {
            if (i > n) break;

            for (int j = 0; j <= 9; j++) {
                if (i + j > n) break;

                for (int k = 0; k <= 9; k++) {
                    if (i + j + k > n) break;

                    //cout << i << " " << j << " " << k << " " << n - i - j - k << '\n';
                    if (n - i - j - k <= 9) c++;
                }
            }

        }

        cout << c << '\n';
    }
}