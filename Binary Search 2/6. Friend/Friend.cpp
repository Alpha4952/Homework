#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("Friend.inp", "r", stdin);
    freopen("Friend.out", "w", stdout);

    int n, b, a[100001], r = 0;

    cin >> n >> b;
    for (int i = 1; i <= n; i++) cin >> a[i];

    sort(a + 1, a + n + 1);

    for (int i = 1; i < n; i++) {
        r += upper_bound(a + i + 1, a + n + 1, b - a[i]) - lower_bound(a + i + 1, a + n + 1, b - a[i]);
    }
    cout << r << endl;
    return 0;
}