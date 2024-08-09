#include<bits/stdc++.h>
using namespace std;

long long t, a[100001], k, n, r;

int main() {
    freopen("garden.inp", "r", stdin);
    freopen("garden.out", "w", stdout);

    cin >> t;

    while (t--) {
        cin >> n >> k;

        r = 0;

        for (int i = 1; i <= k; i++) cin >> a[i];
        
        r = a[1];
        
        for (int i = 2; i <= k; i++) {
            r = max(r, (a[i] - a[i - 1] + 2) / 2);
        }
        
        r = max(r, n - a[k] + 1);
        
        cout << r << endl;
    }
}
