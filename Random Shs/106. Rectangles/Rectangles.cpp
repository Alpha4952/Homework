#include <bits/stdc++.h>
using namespace std;

long long t, n;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Rectangles.inp", "r", stdin);
    freopen("Rectangles.out", "w", stdout);
    
    cin >> t;
    while (t--) {
        cin >> n;
        
        if (n < 4 || n % 2) {
            cout << -1 << '\n';
            continue;
        }

        for (int i = 1; i <= n/4; i++) cout << i*(n/2-i) << " ";
        cout << '\n';
    }

    return 0;
}