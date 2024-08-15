#include <bits/stdc++.h>
using namespace std;

long long t, a, b, r;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("CVolume.inp", "r", stdin);
    freopen("CVolume.out", "w", stdout);

    cin >> t;
    for (int _ = 0; _ < t; _++) {
        cin >> a >> b;
        r = 0;

        if (a == b) {
            cout << 0 << '\n';
            continue;
        }

        if (a > b) {
            r = 0;

            a -= b;

            if (a >= 5) {
                r += a / 5;
                a %= 5;
            }
            if (a >= 2) {
                r += a / 2;
                a %= 2;
            }
            if (a) {
                r++;
                a = 0;
            }

            cout << r << '\n';
            continue;
        }

        if (a < b) {
            r = 0;

            a = b-a;

            if (a >= 5) {
                r += a / 5;
                a %= 5;
            }
            if (a >= 2) {
                r += a / 2;
                a %= 2;
            }
            if (a) {
                r++;
                a = 0;
            }

            cout << r << '\n';
            continue;
        }
    }
}