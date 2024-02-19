#include <bits/stdc++.h>
using namespace std;

long long n, m, a[100001], b[100002];

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("DAYUCLN.inp", "r", stdin);
    freopen("DAYUCLN.out", "r", stdout);
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> m;
        for (int j = 0; j < m; j++) cin >> a[j];

        b[0] = a[0]; b[m] = a[m-1];

        for (int j = 1; j < m; j++) b[j] = a[j-1]*a[j] / __gcd(a[j-1], a[j]);

        for (int j = 0; j <= m; j++) cout << b[j] << " ";
        cout << '\n';
    }
}
