#include <bits/stdc++.h>
using namespace std;

int a[15001], n, k, r, minv, maxv, midv;

bool what(int eh) {
    int b = 1, ehe = 0;

    for (int i = 1; i <= n; i++) {
        if (ehe + a[i] > eh) {
            b++;
            ehe = a[i];
            continue;
        }

        ehe += a[i];
    }

    return b <= k;
}

int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("ZXY.inp", "r", stdin);
    freopen("ZXY.out", "w", stdout);

    maxv = 0; minv = 0;

    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        maxv += a[i];
        minv = max(minv, a[i]);
    }

    while (minv <= maxv) {
        midv = (minv + maxv) / 2;

        if (what(midv)) {
            r = midv;
            maxv = midv - 1;
        } else minv = midv + 1;
    }
    cout << r << endl;
    return 0;
}