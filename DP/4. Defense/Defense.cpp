#include <bits/stdc++.h>
using namespace std;

long long tests, n, a[1001], b[1001], r;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Defense.inp", "r", stdin);
    freopen("Defense.out", "w", stdout);
    
    cin >> tests;
    for (int i = 0; i < tests; i++) {
        r = 0;

        cin >> n;
        fill(b, b+n+1, 1);
        for (int j = 1; j <= n; j++) cin >> a[j];

        for (int j = 2; j <= n; j++) {
            for (int k = 1; k < j; k++) {
                if (a[k] < a[j]) b[j] = max(b[j], b[k]+1);
            }
            r = max(r, b[j]);
        }

        cout << r << '\n';
    }

    return 0;
}