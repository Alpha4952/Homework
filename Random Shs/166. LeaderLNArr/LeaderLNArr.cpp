#include <bits/stdc++.h>
using namespace std;

long long t, n, a[100001], maxv[100001];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("LeaderLNArr.inp", "r", stdin);
    freopen("LeaderLNArr.out", "w", stdout);
    
    cin >> t;
    while (t--) {
        cin >> n;

        fill(maxv, maxv + n + 1, -1e18);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            maxv[i] = a[i];
        }
        for (int i = n-2; i >= 0; i--) {
            maxv[i] = max(maxv[i+1], maxv[i]);
        }

        for (int i = 0; i < n - 1; i++) {
            if (maxv[i] > maxv[i+1]) cout << maxv[i] << " ";
        }
        cout << maxv[n - 1] << '\n';
        
        //for (int i = 0; i < n; i++) cout << maxv[i] << " ";
        //cout << '\n';
    }
}