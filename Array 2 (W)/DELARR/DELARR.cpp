#include <bits/stdc++.h>
using namespace std;

long long n, r, a[100001], s, cur1, cur2;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("DELARR.inp", "r", stdin);
    freopen("DELARR.out", "w", stdout);
    cin >> n;
    
    s = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
    }
    sort(a, a+n);

    cur1 = 0; cur2 = n-1; r = 0;
    while (s) {
        if (s < 0) {
            s -= a[cur1];
            cur1++;
        } else {
            s -= a[cur2];
            cur2--;
        }
        r++;
    }
    cout << r;
}