#include <bits/stdc++.h>
using namespace std;

int curl, curr, n, a[100001], r1, r2, p1;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("CGAME.inp", "r", stdin);
    freopen("CGAME.out", "w", stdout);
    cin >> n;
    p1 = 1; curl = 0; curr = n-1; r1 = 0; r2 = 0;
    for (int i = 0; i < n; i++) cin >> a[i];
    while (curl < curr) {
        if (p1) {
            r1 += max(a[curl], a[curr]);
            p1 = 0;
        } else {
            r2 += max(a[curl], a[curr]);
            p1 = 1;
        }
        if (a[curl] > a[curr]) curl++;
        else curr--;
    }
    if (curl == curr) {
        if (p1) r1 += a[curl];
        else r2 += a[curl];
    }
    cout << r1 << " " << r2;
}