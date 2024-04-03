#include <bits/stdc++.h>
using namespace std;

long long n, a[100001], r;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Demcs.inp", "r", stdin);
    freopen("Demcs.out", "w", stdout);

    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);

    for (long long i = 1; i <= 2000000000; i *= 2) {
        for (int j = 0; j < n; j++) r += upper_bound(a+j+1, a+n, i-a[j]) - lower_bound(a+j+1, a+n, i-a[j]);
    }
    cout << r;
}