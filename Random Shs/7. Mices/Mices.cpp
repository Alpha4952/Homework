#include <bits/stdc++.h>
using namespace std;

long long t, n, m[100001], h[100001], eh;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Mices.inp", "r", stdin);
    freopen("Mices.out", "w", stdout);
    
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;

        eh = 0;
        
        for (int j = 0; j < n; j++) {
            cin >> m[j];
        }
        
        for (int j = 0; j < n; j++) {
            cin >> h[j];
        }

        sort(m, m + n);
        sort(h, h + n);

        for (int i = 0; i < n; i++) {
            eh = max(eh, abs(m[i] - h[i]));
        }

        cout << eh << '\n';
    }

    return 0;
}