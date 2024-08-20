#include <bits/stdc++.h>
using namespace std;

long long t, n, k;
string s;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("MinNum.inp", "r", stdin);
    freopen("MinNum.out", "w", stdout);

    cin >> t;
    while (t--) {
        cin >> n >> k >> s;

        if (k == 0) cout << s << '\n';

        if (s.length() == 1) {
            if (k) cout << 0 << '\n';
            else if (k == 0) cout << s << '\n';

            continue;
        }

        if (k && s.length() > 1) {
            cout << 1;
            if (s[0] != '1') k--;
        }
        for (int i = 1; i < n; i++) {
            if (k == 0) {
                cout << s[i];
                continue;
            }

            cout << 0;
            if (s[i] != '0') k--;
        }
        cout << '\n';
    }
}