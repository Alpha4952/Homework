#include <bits/stdc++.h>
using namespace std;

long long t, hmm;
string a, b, c;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Strings.inp", "r", stdin);
    freopen("Strings.out", "w", stdout);

    cin >> t;
    while (t--) {
        cin >> a >> b >> c;

        hmm = 1;

        //if (a == b) {
            //cout << "YES" << '\n';
          //  continue;
        //}

        for (int i = 0; i < a.length(); i++) {
            if (a[i] != b[i] && b[i] != c[i] && a[i] != c[i] || (a[i] == b[i] && a[i] != c[i])) {
                cout << "NO" << '\n';
                hmm = 0;
                break;
            }
        }
        if (hmm) cout << "YES" << '\n';
        //cout << a << '\n';
    }
}