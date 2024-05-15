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

    for (int i = 0; i < n-2; i++) {
        for (int j = i+1; j < n-1; j++) {
            u = a[j]*2 - a[i];
            d = a[j]*3 - a[i]*2;
            r += upper_bound(a, a+n, d) - lower_bound(a, a+n, u);
        }
    }
    cout << r;
}