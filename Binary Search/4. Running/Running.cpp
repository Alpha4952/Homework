#include <bits/stdc++.h>
using namespace std;

long long n, a[1001], r, u, d;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Running.inp", "r", stdin);
    freopen("Running.out", "w", stdout);
    
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);

    for (int x = 0; x < n-2; x++) {
        for (int y = x+1; y < n-1; y++) {
            u = a[y]*2 - a[x];
            d = a[y]*3 - a[x]*2;
            r += upper_bound(a, a+n, d) - lower_bound(a, a+n, u);
        }
    }
    cout << r;
}