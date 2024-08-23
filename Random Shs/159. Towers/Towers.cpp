#include <bits/stdc++.h>
using namespace std;

long long n, c[1001], t, maxh, countr;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Towers.inp", "r", stdin);
    freopen("Towers.out", "w", stdout);
    
    fill(c, c + 1001, 0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;

        c[t]++;
    }

    maxh = 1; countr = 0;
    for (int i = 0; i < 1001; i++) {
        if (c[i]) {
            countr++;
            maxh = max(maxh, c[i]);
        }
    }

    cout << maxh << " " << countr << endl;
    return 0;
}