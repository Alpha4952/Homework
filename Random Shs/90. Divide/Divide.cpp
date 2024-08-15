#include <bits/stdc++.h>
using namespace std;

long long t, n, hm[3], r;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Divide.inp", "r", stdin);
    freopen("Divide.out", "w", stdout);
    
    cin >> t;
    while (t--) {
        cin >> n;

        r = 0;
        while (n % 5 == 0) {
            r += 3;
            n /= 5;
        }
        while (n % 3 == 0) {
            r += 2;
            n /= 3;
        }
        while (n % 2 == 0) {
            r++;
            n /= 2;
        }

        if (n > 1) cout << -1 << '\n';
        else cout << r << '\n';
    }
}