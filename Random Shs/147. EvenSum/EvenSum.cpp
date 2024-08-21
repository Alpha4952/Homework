#include <bits/stdc++.h>
using namespace std;

long long t, n, a[10001], c;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("EvenSum.inp", "r", stdin);
    freopen("EvenSum.out", "w", stdout);
    
    cin >> t;
    while (t--) {
        cin >> n;

        a[0] = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            a[i] += a[i-1];
        }

        c = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = i; j <= n; j++) {
                if ((a[j] - a[i-1])%2 == 0) c++;
            }
        }

        cout << c << '\n';
    }
}