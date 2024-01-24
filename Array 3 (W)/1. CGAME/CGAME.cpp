#include <bits/stdc++.h>
using namespace std;

long long cur1, cur2, n, a[100001], r1, r2, p1;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("CGAME.inp", "r", stdin);
    freopen("CGAME.out", "w", stdout);
    cin >> n;

    for (int i = 0; i < n; i++) cin >> a[i];

    cur1 = 0; cur2 = n-1; r1 = 0; r2 = 0; p1 = 1;
    while (cur1 < cur2) {
        if (a[cur1] > a[cur2]) {
            if (p1) {r1 += a[cur1]; p1 = 0;}
            else {r2 += a[cur1]; p1 = 1;}
            cur1++;
        } else {
            if (p1) {r1 += a[cur2]; p1 = 0;}
            else {r2 += a[cur2]; p1 = 1;}
            cur2--;
        }
    }
    if (n%2) {
        if (p1) r1 += a[cur1];
        else r2 == a[cur1];
    }
    cout << r1 << " " << r2;
}