#include <bits/stdc++.h>
using namespace std;

long long n, k, f, l, m;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Candy.inp", "r", stdin);
    freopen("Candy.out", "w", stdout);
    
    cin >> n >> k;
    
    f = 1;
    l = n;
    if (n == 1) cout << 0 << endl;
    while (f < l) {
        m = (f + l)/2;

        if (m*(m+1)/2 - (n - m) == k) {
            cout << n - m << endl;
            return 0;
        } else if (m*(m+1)/2 - (n - m) < k) {
            f = m + 1;
        } else {
            l = m;
        }
    }
}