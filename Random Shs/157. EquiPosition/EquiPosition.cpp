#include <bits/stdc++.h>
using namespace std;

long long t, n, a[1000001], sf[1000001], sl[1000001];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("EquiPosition.inp", "r", stdin);
    freopen("EquiPosition.out", "w", stdout);
    
    cin >> t;
    while (t--) {
        cin >> n;

        sf[0] = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            sf[i] = sf[i-1] + a[i];
        }

        sl[n + 1] = 0;
        for (int i = n; i > 0; i--) {
            sl[i] = a[i] + sl[i+1];    
        }

        for (int i = 1; i <= n; i++) {
            if (sf[i] == sl[i]) {
                cout << i << '\n';
                break;
            }
        }
    }
}