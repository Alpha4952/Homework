#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    std::freopen("Bai05.inp", "r", stdin);
    std::freopen("Bai05.out", "w", stdout);

    int m, n, p, t, bb, r, a[100001], b[100001], res, fbusf, sbusf, fbuss, sbuss, tax, bus, bus1, bus2, bus3;

    cin >> n >> m >> p >> t >> bb;

    for (int i = 1; i <= m; i++) cin >> a[i];
    for (int i = 1; i <= p; i++) cin >> b[i];
    a[0] = 1; a[m + 1] = n;
    b[0] = 1; b[p + 1] = n;

    for (int i = 0; i <= m; i++) {
        bus1 = 1e9; bus2 = 1e9; bus3 = 1e9; bus = 1e9;

        tax = (a[i + 1] - a[i]) * t;
        fbusf = lower_bound(b, b + p, a[i]) - b;
        sbusf = upper_bound(b + fbusf, b + p, a[i]) - b;
        fbuss = lower_bound(b, b + p, a[i + 1]) - b;
        fbuss = max(0, fbuss);
        sbuss = upper_bound(b + fbuss, b + p, a[i + 1]) - b;

        bus1 = (a[i] - b[fbusf]) * t + bb + (a[i + 1] - b[sbusf]) * t;
        bus2 = (a[i] - b[fbusf]) * t + bb + (b[sbuss] - a[i + 1]) * t;
        bus3 = (b[sbusf] - a[i]) * t + bb + (b[sbuss] - a[i + 1]) * t;

        bus = min(min(bus, bus1), min(bus2, bus3));

        if (bus < 0) r += tax;
        else r += min(bus, tax);
    }
    cout << r << endl;
    return 0;
}