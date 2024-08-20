#include <bits/stdc++.h>
using namespace std;

long long t, n, k, hm, p;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("FactorK.inp", "r", stdin);
    freopen("FactorK.out", "w", stdout);

    cin >> t;
    while (t--) {
        cin >> n >> k;

        vector <long long> factors;
        hm = sqrt(n);
        
        for (int i = 2; i <= hm; i++) {
            if (i > n) break;
            if (n % i) continue;

            while (n % i == 0) {
                n /= i;
                factors.push_back(i);
            }
        }

        if (n > 1) factors.push_back(n);
        //for (int i = 0; i < factors.size(); i++) cout << factors[i] << " ";
        if (factors.size() < k) cout << -1 << '\n';
        else cout << factors[k - 1] << '\n';
    }
}