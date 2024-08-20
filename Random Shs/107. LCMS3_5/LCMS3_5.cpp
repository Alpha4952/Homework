#include <bits/stdc++.h>
using namespace std;

long long t, n;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("LCMS3_5.inp", "r", stdin);
    freopen("LCMS3_5.out", "w", stdout);
    
    cin >> t;
    while (t--) {
        cin >> n;
        cout << n/3 + n/5 - n/15 << '\n';
    }
}