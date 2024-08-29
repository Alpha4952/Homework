#include <bits/stdc++.h>
using namespace std;

long long t, n, a[100001], s, c, ehe;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("CountSquares.inp", "r", stdin);
    freopen("CountSquares.out", "w", stdout);

    cin >> t;
    while (t--) {
        cin >> n;
        fill(a, a + 100001, 0);
        for (int i = 0; i < n; i++) {
            cin >> c;
            a[c]++;
        }

        ehe = 1;
        for (int i = 1000; i > 0; i--) {
            if (a[i] >= 4) {
                s = i*i;
                c = a[i]/4;
                ehe = 0;
                break;
            }
        }

        if (ehe) cout << -1 << '\n';
        else cout << s << " " << c << endl;
    }
}