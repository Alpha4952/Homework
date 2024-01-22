#include <bits/stdc++.h>
using namespace std;

long long n, a[100001], cur1;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("BKID.inp", "r", stdin);
    freopen("BKID.out", "w", stdout);
    
    cin >> n;
    cur1 = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (i < 1) continue;
        if (a[cur1] > a[i]) {
            cout << cur1 + 1 << '\n';
            cur1 = i;
        } else {
            cout << i + 1 << '\n';
        }
    }
}