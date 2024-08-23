#include <bits/stdc++.h>
using namespace std;

long long t, n, m, a[100001], s1, s2;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Diff.inp", "r", stdin);
    freopen("Diff.out", "w", stdout);
    
    cin >> t;
    while (t--) {
        cin >> n >> m;

        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);

        s1 = 0; s2 = 0;
        for (int i = 0; i < n-m; i++) s1 += a[i];
        for (int i = n - (n-m); i < n; i++) s2 += a[i];

        cout << abs(s1 - s2) << '\n';
    }
}