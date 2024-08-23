#include <bits/stdc++.h>
using namespace std;

long long t, n, c0, c1, c2, temp;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Sorting012.inp", "r", stdin);
    freopen("Sorting012.out", "w", stdout);
    
    cin >> t;
    while (t--) {
        cin >> n;

        c0 = 0; c1 = 0; c2 = 0;
        while (n--) {
            cin >> temp;
            
            if (temp == 0) c0++;
            if (temp == 1) c1++;
            if (temp == 2) c2++;
        }

        while (c0--) cout << 0 << " ";
        while (c1--) cout << 1 << " ";
        while (c2--) cout << 2 << " ";
        cout << '\n';
    }
}