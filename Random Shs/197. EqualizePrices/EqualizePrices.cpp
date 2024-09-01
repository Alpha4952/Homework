#include <bits/stdc++.h>
using namespace std;

long long t, n, k, temp, sure, minPrice, maxPrice;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("EqualizePrices.inp", "r", stdin);
    freopen("EqualizePrices.out", "w", stdout);

    cin >> t;
    while (t--) {
        vector <long long> h;
        map <long long, long long> hmm, np;
        minPrice = 1e18; maxPrice = -1e18;

        cin >> n >> k;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            minPrice = min(minPrice, temp);
            maxPrice = max(maxPrice, temp);
        }

        if (abs(minPrice + k - maxPrice) > k) cout << -1 << '\n';
        else cout << minPrice + k << '\n';
        //cout << minPrice << " " << maxPrice << '\n';
    }
}