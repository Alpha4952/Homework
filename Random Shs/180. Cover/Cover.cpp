#include <bits/stdc++.h>
using namespace std;

long long n, s, e, ts, te, hmm, ehe;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Cover.inp", "r", stdin);
    freopen("Cover.out", "w", stdout);

    cin >> n;

    hmm = 1; ehe = 1;

    if (n) cin >> s >> e;
    for (int i = 1; i < n; i++) {
        cin >> ts >> te;

        if (ts >= s && ts <= e && te <= e && te >= ts) {
            hmm = 1;
        } else if (ts <= s && te >= e) {
            s = ts;
            e = te;
            hmm = 1;
            ehe = i + 1;
        } else {
            hmm = 0;
            s = min(ts, s);
            e = max(e, te);
        }
    }

    if (hmm) cout << ehe << endl;
    else cout << -1 << endl;
    return 0;
}