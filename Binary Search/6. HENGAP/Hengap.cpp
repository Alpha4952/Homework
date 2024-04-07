#include <bits/stdc++.h>
using namespace std;

long long n, a[300001], r, res, mid;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Hengap.inp", "r", stdin);
    freopen("Hengap.out", "w", stdout);

    cin >> n >> r;

    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);

    for (int i = 0; i < n; i++) res += n - (lower_bound(a, a+n, a[i] + r + 1) - a);
    
    cout << res << '\n';
}