#include <bits/stdc++.h>
using namespace std;

int n, l, r;
pair<int, int> a[10000];

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("Cover.inp", "r", stdin);
    freopen("Cover.out", "w", stdout);

    cin >> n;

    l = 1e9, r = -1e9;

    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
        l = min(l, a[i].first);
        r = max(r, a[i].second);
    }

    for (int i = 0; i < n; i++) {
        if (a[i].first <= l && a[i].second >= r) {
            cout << i + 1 << endl;
            return 0;
        }
    }
}
