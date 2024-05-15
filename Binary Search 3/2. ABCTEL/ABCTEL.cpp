#include<bits/stdc++.h>
using namespace std;

int n, k, x[1000002], s[1000002], res = 0, r;
pair<int, int> b[1000002];

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("abctel.inp", "r", stdin);
    freopen("abctel.out", "w", stdout);

    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> b[i].second >> b[i].first;
    sort(b + 1, b + n + 1);


    for (int i = 1; i <= n; i++) x[i] = b[i].first;
    s[1] = b[1].second;
    for (int i = 2; i <= n; i++) s[i] = s[i - 1] + b[i].second;

    for (int i = 1; i <= n; i++) {
        r = upper_bound(x + 1, x + n + 1, x[i] + 2 * k) - x - 1;
        res = max(res, s[r] - s[i - 1]);
    }

    cout << res << endl;
    return 0;
}
