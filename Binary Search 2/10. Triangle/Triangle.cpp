#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("Triangle.inp", "r", stdin);
    freopen("Triangle.out", "w", stdout);

    int n, a[1001], b[1001], c[1001], r;

    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) cin >> c[i];

    sort(a, a + n);
    sort(b, b + n);
    sort(c, c + n);

    r = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            r += upper_bound(c, c + n, a[i] + b[j] - 1) - (lower_bound(c, c + n, abs(a[i] - b[j]) + 1));
        }
    }

    cout << r;
}