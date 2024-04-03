#include <bits/stdc++.h>
using namespace std;

long long n, a[100001], b[100001], r, tar;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("SGame.inp", "r", stdin);
    freopen("SGame.out", "w", stdout);
    
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    sort(a, a+n);
    sort(b, b+n);

    for (int i = 0; i < n; i++) {
        tar = lower_bound(b, b+n, -a[i]) - a - 1;
        r += min(min(r, abs(a[i] + b[tar])), abs(a[i] + b[tar+1]));
    }
    cout << r;
}