#include <bits/stdc++.h>
using namespace std;

int n, x[300001], y[300001], xx[300001], yy[300001], p, t[40], r;
pair <int, int> oxy[300001], oyx[300001];

bool sortr(pair <int, int> a, pair <int, int> b) {
    if (a.first != b.first) return a.first < b.first;
    else return a.second < b.second;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("OakTree.inp", "r", stdin);
    freopen("OakTree.out", "w", stdout);

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> oxy[i].first >> oxy[i].second;
        oyx[i].first = oxy[i].second;
        oyx[i].second = oxy[i].first;
    }
    sort(oxy + 1, oxy + n + 1, sortr);
    sort(oyx + 1, oyx + n + 1, sortr);

    //for (int i = 1; i <= n; i++) cout << oxy[i].first << " " << oxy[i].second << '\n';

    for (int i = 1; i <= n; i++) {
        x[i] = oxy[i].first;
        y[i] = oxy[i].second;
        xx[i] = oyx[i].second;
        yy[i] = oyx[i].first;
    }

    for (int i = 1; i <= n; i++) cout << x[i] << " " << y[i] << '\n';
    cout << '\n';
    for (int i = 1; i <= n; i++) cout << yy[i] << " " << xx[i] << '\n';
    cout << '\n';

    cin >> p;
    for (int i = 0; i < p; i++) {
        cin >> t[0] >> t[1] >> t[2] >> t[3];

        t[4] = lower_bound(x + 1, x + n + 1, t[0]) - x;
        t[5] = upper_bound(x + t[4], x + n + 1, t[0]) - x;
        t[6] = lower_bound(x + 1, x + n + 1, t[2]) - x;
        t[7] = upper_bound(x + t[6], x + n + 1, t[2]) - x;

        t[9] = lower_bound(y + t[4], y + t[5], min(t[1], t[3])) - y;
        t[8] = upper_bound(y + t[9], y + t[5], max(t[1], t[3])) - y;
        t[11] = lower_bound(y + t[6], y + t[7], min(t[1], t[3])) - y;
        t[10] = upper_bound(y + t[11], y + t[7], max(t[1], t[3])) - y;

        //

        t[12] = lower_bound(yy + 1, yy + n + 1, t[1]) - yy;
        t[13] = upper_bound(yy + t[12], yy + n + 1, t[1]) - yy;
        t[14] = lower_bound(yy + 1, yy + n + 1, t[3]) - yy;
        t[15] = upper_bound(yy + t[14], yy + n + 1, t[1]) - yy;

        t[16] = lower_bound(xx + t[12], xx + t[13], min(t[0], t[2])) - xx;
        t[17] = upper_bound(xx + t[16], xx + t[13], max(t[0], t[2])) - xx;
        t[18] = lower_bound(xx + t[14], xx + t[15], min(t[0], t[2])) - xx;
        t[19] = upper_bound(xx + t[18], xx + t[15], max(t[0], t[2])) - xx;

        //cout << t[8] << " " << t[9] << " " << t[10] << " " << t[11] << " " << t[16] << " " << t[17] << " " << t[18] << " " << t[19] << '\n';

        r = t[8] - t[9] + t[10] - t[11] + t[17] - t[16] + t[19] - t[18];

        if (x[t[4]] == t[0]) {
            if (y[t[9]] == t[1]) r--;
            if (y[t[8]-1] == t[3]) r--;
        }
        if (x[t[5]-1] == t[2]) {
            if (y[t[9]] == t[1]) r--;
            if (y[t[8]-1] == t[3]) r--;
        }

        cout << r << '\n';
    }
}