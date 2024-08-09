#include <bits/stdc++.h>
using namespace std;

long long t, n, a[1000001];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Triangular.inp", "r", stdin);
    freopen("Triangular.out", "w", stdout);
    
    a[1] = 1; a[2] = 3;
    for (int i = 3; i <= 4500; i++) a[i] = a[i-1] + i;

    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;

        if (a[lower_bound(a + 1, a + 4501, n) - a] == n) cout << 1;
        else cout << 0;
        cout << '\n';
    }

    return 0;
}