#include <bits/stdc++.h>
using namespace std;

long long n, l, r1[1001], r2[1001], r3[1001], r4[1001], a[1000001], b[1000001], res, ehe1, ehe2;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Tera.inp", "r", stdin);
    freopen("Tera.out", "w", stdout);

    cin >> n >> l;
    for (int i = 0; i < n; i++) cin >> r1[i];
    for (int i = 0; i < n; i++) cin >> r2[i];
    for (int i = 0; i < n; i++) cin >> r3[i];
    for (int i = 0; i < n; i++) cin >> r4[i];

    ehe1 = 0; ehe2 = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[ehe1] = r1[i] + r2[j];
            b[ehe2] = r3[i] + r4[j];
            ehe1++;
            ehe2++;
        }
    }

    sort(a, a+ehe1);
    sort(b, b+ehe2);

    res = 0;
    for (int i = 0; i < ehe1; i++) {
        res += upper_bound(b, b+ehe2, l - a[i]) - lower_bound(b, b+ehe2, l - a[i]);
    }

    cout << res << endl;
    return 0;
}