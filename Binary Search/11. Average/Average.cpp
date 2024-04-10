#include <bits/stdc++.h>
using namespace std;

long long n, k;
double a[200001], l, r, res, mid;
vector <double> pref_sum(200001);

bool ok(double ans) {
    double min_val = 0;
    for (int i = k; i <= n; i++) {
        if (min_val <= pref_sum[i] - ans*i) return true;
        min_val = min(min_val, pref_sum[i - k + 1] - ans*(i - k + 1));
    }

    return false;
}

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Average.inp", "r", stdin);
    freopen("Average.out", "w", stdout);

    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] *= 10000;
    }

    for (int i = 1; i <= n; i++) pref_sum[i] = pref_sum[i - 1] + a[i];

    l = *min_element(a + 1, a + n + 1);
    r = *max_element(a + 1, a + n + 1);

    while (l <= r) {
        mid = (l + r) / 2;
        if (ok(mid)) {
            res = mid;
            l = mid + 1;
        } else r = mid - 1;
    }

    cout << fixed << setprecision(3) << res / 10000.0 << endl;
    return 0;
}
