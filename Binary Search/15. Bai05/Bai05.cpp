#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    std::freopen("Bai05.inp", "r", stdin);
    std::freopen("Bai05.out", "w", stdout);

    long long m, n, p, t, bb, a[100001], b[100001], ba1, ba2, ba3, bb1, bb2, bb3,res;

    cin >> n >> m >> p >> t >> bb;

    for (int i = 1; i <= m; i++) cin >> a[i];
    for (int i = 1; i <= p; i++) cin >> b[i];
    a[0] = 1; a[m + 1] = n;
    b[0] = 1; b[p + 1] = n;

    res = 0;
    for (int i = 0; i <= m; i++) {
        ba1 = lower_bound(b, b + p + 1, a[i]) - b;
        if (b[ba1] > a[i]) ba1--;
        ba2 = upper_bound(b, b + p + 1, a[i]) - b;
        ba3 = abs(b[ba1] - a[i]) < abs(b[ba2] - a[i]) ? ba1 : ba2;

        bb1 = lower_bound(b, b + p + 1, a[i + 1]) - b;
        if (b[bb1] > a[i + 1]) bb1--;
        bb2 = upper_bound(b, b + p + 1, a[i + 1]) - b;
        bb2 = min(bb2, p + 1);
        bb3 = abs(b[bb1] - a[i + 1]) < abs(b[bb2] - a[i + 1]) ? bb1 : bb2;
        res += min((abs(a[i] - b[ba3]) + abs(a[i + 1] - b[bb3])) * t + bb, (a[i + 1] - a[i]) * t);
    }
    cout << res << endl;
    return 0;
}