#include <bits/stdc++.h>
using namespace std;

long long m, n, x, r, a[100001], b[100001], tar;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Sumx.inp", "r", stdin);
    freopen("Sumx.out", "w", stdout);

    cin >> m >> n >> x;

    for (int i = 0; i < m; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    sort(a, a+m);
    sort(b, b+n);

    for (int i = 0; i < m; i++) {
        tar = x - a[i];
        r += upper_bound(b, b+n, tar) - lower_bound(b, b+n, tar);
    }

    cout << r;

    return 0;
}