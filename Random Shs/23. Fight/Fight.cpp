#include <bits/stdc++.h>
using namespace std;

long long yh, ya, yd, mh, ma, md, h, a, d, r, k, m;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("Fight.inp", "r", stdin);
    freopen("Fight.out", "w", stdout);

    cin >> yh >> ya >> yd >> mh >> ma >> md >> h >> a >> d;

    for (int i = ya; i <= 200; i++) {
        for (int j = yd; j <= 100; j++) {
            if (i <= md) continue;
            
            r = ceil(mh / (i - md));
            k = max((ma - j) * r + 1, yh);
            m = min(m, (k - yh) * h + (i - ya) * a + (j - yd) * d);
        }
    }

    cout << m << endl;
    return 0;
}
