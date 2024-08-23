#include <bits/stdc++.h>
using namespace std;

long long t, n, h[1000001], mah[1000001], r;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Buildings.inp", "r", stdin);
    freopen("Buildings.out", "w", stdout);
    
    cin >> t;
    while (t--) {
        cin >> n;
        
        h[0] = -1; r = 0; mah[0] = -1;
        for (int i = 1; i <= n; i++) {
            cin >> h[i];
            mah[i] = max(mah[i-1], h[i]);
            if (h[i] >= mah[i-1]) r++;
        }

        //for (int i = 1; i <= n; i++) cout << mah[i] << " ";
        //cout << '\n';

        cout << r << '\n';
    }
}