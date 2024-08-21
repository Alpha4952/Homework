#include <bits/stdc++.h>
using namespace std;

long long t, n, z, temp;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("BinArraySorting.inp", "r", stdin);
    freopen("BinArraySorting.out", "w", stdout);
    
    cin >> t;
    while (t--) {
        cin >> n;

        z = 0;
        for (int i = 0; i < n; i++) {
            cin >> temp;

            if (temp == 0) z++;
        }

        for (int i = 0; i < z; i++) cout << 0 << " ";
        for (int i = 0; i < n-z; i++) cout << 1 << " ";
        cout << '\n';
    }
}