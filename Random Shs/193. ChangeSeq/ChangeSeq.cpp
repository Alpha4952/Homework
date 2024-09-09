#include <bits/stdc++.h>
using namespace std;

long long t, n, l, r, diff;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("ChangeSeq.inp", "r", stdin);
    freopen("ChangeSeq.out", "w", stdout);

    cin >> t;
    while (t--) {
        vector <long long> a, b;

        cin >> n;

        for (int i = 0; i < n; i++) {
            cin >> l;
            a.push_back(l);
        }
        for (int i = 0; i < n; i++) {
            cin >> l;
            b.push_back(l);
            b[i] -= a[i];
        }

        //cout << "/////////////////" << '\n';
        //for (int i = 0; i < n; i++) cout << a[i] << " ";
        //cout << '\n';
        //for (int i = 0; i < n; i++) cout << b[i] << " ";
        //cout << '\n';

        l = -1; r = -1; diff = 0;
        for (int i = 0; i < n; i++) {
            if (b[i]) {
                diff = b[i];
                l = i;
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--) {
            if (b[i]) {
                r = i;
                break;
            }
        }

        if (diff < 0) {
            cout << "NO" << '\n';
            continue;
        }
        if (l == r) {
            cout << "YES" << '\n';
            continue;
        }

        for (int i = l; i <= r; i++) {
            if (b[i] != diff) {
                l = -1;
                break;
            }
        }

        if (l == -1) cout << "NO" << '\n';
        else cout << "YES" << '\n';
    }
}