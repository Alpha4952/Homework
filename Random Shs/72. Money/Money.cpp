#include <bits/stdc++.h>
using namespace std;

long long t, a, b, n, s, hm;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Money.inp", "r", stdin);
    freopen("Money.out", "w", stdout);
    
    cin >> t;
    for (int _ = 0; _ < t; _++) {
        cin >> a >> b >> n >> s;

        hm = 1;
        
        if (a*n + b < s) cout << "NO" << '\n';
        else if (b >= s) cout << "YES" << '\n';
        else {
            for (int i = 1; i <= a; i++) {
                if (i*n > s) break;
                if (i*n + b >= s) {
                    cout << "YES" << '\n';
                    hm = 0;
                    break;
                }
            }
            if (hm) cout << "NO" << '\n';
        }
    }
}