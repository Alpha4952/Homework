#include <bits/stdc++.h>
using namespace std;

long long t, c, f, l;
string s;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("ErasingZeroes.inp", "r", stdin);
    freopen("ErasingZeroes.out", "w", stdout);
    
    cin >> t;
    while (t--) {
        cin >> s;

        f = 0; l = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '1') {
                f = i;
                break;
            }
        }
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == '1') {
                l = i;
                break;
            }
        }

        if (f == l) {
            cout << 0 << '\n';
            continue;
        }

        c = 0;
        for (int i = f; i < l; i++) {
            if (s[i] == '0') c++;
        }

        cout << c << '\n';
    }
}