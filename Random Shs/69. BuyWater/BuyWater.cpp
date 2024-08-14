#include <bits/stdc++.h>
using namespace std;

long long t, n, a, b;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("BuyWater.inp", "r", stdin);
    freopen("BuyWater.out", "w", stdout);
    
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> a >> b;

        if (2*a > b) {
            if (n%2) cout << n/2*b + a << '\n';
            else cout << n/2*b << '\n';
        } else cout << n*a << '\n';
    }
}