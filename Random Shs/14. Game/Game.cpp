#include <bits/stdc++.h>
using namespace std;

long long t, n, x, y;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Game.inp", "r", stdin);
    freopen("Game.out", "w", stdout);
    
    cin >> t;
    
    for (int _ = 0; _ < t; _++) {
        cin >> x >> y >> n;
        if (n % 2) {
            cout << max(x*2, y) / min(x*2, y) << '\n'; 
        } else {
            cout << max(x, y) / min(x, y) << '\n';
        }
    }
}