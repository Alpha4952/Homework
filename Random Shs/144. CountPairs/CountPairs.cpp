#include <bits/stdc++.h>
using namespace std;

long long t, n, a[10001], c;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("CountPairs.inp", "r", stdin);
    freopen("CountPairs.out", "w", stdout);
    
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            a[i] *= i;
        }

        c = 0;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) if (a[i] > a[j]) c++;
        }

        cout << c << '\n';
    }
}