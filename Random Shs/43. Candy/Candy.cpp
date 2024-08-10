#include <bits/stdc++.h>
using namespace std;

long long n, m, a[105], r, ans;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("Candy.inp", "r", stdin);
    freopen("Candy.out", "w", stdout);

    r = -1;

    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] / m >= r) {
            r = a[i] / m;
            ans = i;
        }
    }
    cout << ans;
    return 0;
}
