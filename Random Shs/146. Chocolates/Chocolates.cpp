#include <bits/stdc++.h>
using namespace std;

long long t, n, temp, r;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Chocolates.inp", "r", stdin);
    freopen("Chocolates.out", "w", stdout);
    
    cin >> t;
    while (t--) {
        cin >> n;

        r = 1e18;
        while (n--) {
            cin >> temp;

            r = min(r, temp);
        }

        cout << r << '\n';
    }
}