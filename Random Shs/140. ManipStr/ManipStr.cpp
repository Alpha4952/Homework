#include <bits/stdc++.h>
using namespace std;

long long t, l;
string a, b;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("ManipStr.inp", "r", stdin);
    freopen("ManipStr.out", "w", stdout);

    cin >> t;
    while (t--) {
        cin >> l >> a >> b;
        vector <long long> difa, difb;

        for (int i = 0; i < l; i++) {
            if (a[i] != b[i]) {
                difa.push_back(a[i] - 'a');
                difb.push_back(b[i] - 'a');
            }
        }

        if (difa.size() != 2) {
            cout << "No" << '\n';
        } else {
            if (difa[0] == difa[1] && difb[1] == difb[0]) cout << "Yes" << '\n';
            else cout << "No" << '\n';
        }
    }

    return 0;
}