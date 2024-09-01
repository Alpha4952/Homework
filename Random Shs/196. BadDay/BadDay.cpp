#include <bits/stdc++.h>
using namespace std;

long long t, n, a[1000001], minv[1000001], c;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("BadDay.inp", "r", stdin);
    freopen("BadDay.out", "w", stdout);
    
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];

        minv[n] = 1e18;
        for (int i = n - 1; i >= 0; i--) minv[i] = min(a[i], minv[i+1]);

        //for (int i = 0; i < n; i++) cout << minv[i] << " ";
        //cout << '\n';

        c = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > minv[i]) c++;
        }
        cout << c << '\n';
    }
}