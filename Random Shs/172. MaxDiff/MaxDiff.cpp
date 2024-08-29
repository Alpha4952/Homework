#include <bits/stdc++.h>
using namespace std;

long long n, a[100001], maxc, minc;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("MaxDiff.inp", "r", stdin);
    freopen("MaxDiff.out", "w", stdout);

    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a, a + n);

    if (a[0] != a[n - 1]) {
        maxc = 1; minc = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] != a[0]) break;
            minc++;
        }
        for (int i = n - 2; i > 0; i--) {
            if (a[i] != a[n - 1]) break;
            maxc++;
        }

        cout << a[n-1] - a[0] << " " << maxc * minc << endl;
    } else {
        cout << 0 << " " << n * n - 1 << endl;
    }

    return 0;
}