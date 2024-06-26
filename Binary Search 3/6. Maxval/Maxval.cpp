#include <bits/stdc++.h>
using namespace std;

long long n, a[200001], r;

int main () {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("Maxval.inp", "r", stdin);
    freopen("Maxval.out", "w", stdout);
    
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);

    for (int i = 0; i < n; i++) r = max(r, a[lower_bound(a, a+n, 2*a[i]) - a - 1] % a[i]);
    
    cout << r << endl;
    return 0;
}