#include <bits/stdc++.h>
using namespace std;

long long n, m, a[100001], r;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Capso.inp", "r", stdin);
    freopen("Capso.out", "w", stdout);

    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);

    for (int i = 0; i < n; i++) r += upper_bound(a + i + 1, a + n, m - a[i]) - lower_bound(a + i + 1, a + n, m - a[i]);
    cout << r << endl;
    return 0;
}