#include <bits/stdc++.h>
using namespace std;

long long n, a[100001], r, lim;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Maxval.inp", "r", stdin);
    freopen("Maxval.out", "w", stdout);
    
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);

    for (int i = 0; i < n; i++) {
        lim = upper_bound(a, a+n, 2*a[i]) - a;
        lim = min(n, lim);
        for (int j = i+1; j < lim; j++) {
            r = max(r, a[j] % a[i]);
        }
    }
    cout << r;
}