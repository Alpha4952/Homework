#include <bits/stdc++.h>
using namespace std;

long long t, n, l, r, temp;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("MultiplyLR.inp", "r", stdin);
    freopen("MultiplyLR.out", "w", stdout);
    
    cin >> t;
    while (t--) {
        cin >> n;

        l = 0; r = 0;
        for (int i = 0; i < n/2; i++) {
            cin >> temp;
            l += temp;
        }
        for (int i = n/2; i < n; i++) {
            cin >> temp;
            r += temp;
        }

        cout << l*r << '\n';
    }
}