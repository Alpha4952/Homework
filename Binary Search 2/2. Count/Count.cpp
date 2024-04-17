#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("Count.inp", "r", stdin);
    freopen("Count.out", "w", stdout);

    int n, k, cntr, a[100001], temp, cur, temp2;
    pair <int, int> ehe[100001], r;

    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);

    cntr = 0; ehe[0].first = a[0]; ehe[0].second = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) ehe[cntr].second++;
        else {
            cntr++;
            ehe[cntr].first = a[i];
            ehe[cntr].second = 1;
        }
    }

    r.first = a[0];
    r.second = ehe[0].second;

    for (int i = 1; i <= cntr; i++) {
        cur = ehe[i].second; temp = k;

        for (int j = i-1; j >= 0; j--) {
            if (temp <= 0) break;

            temp2 = temp / (ehe[i].first - ehe[j].first);
            if (temp2 > ehe[j].second) temp2 = ehe[j].second;
            cur += temp2;
            temp -= temp2*(a[i] - a[j]);
        }

        if (cur > r.second) {
            r.second = cur;
            r.first = ehe[i].first;
        }
    }

    cout << r.second << " " << r.first << endl;
    return 0;
}