#include <bits/stdc++.h>
using namespace std;

long long n;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Rices.inp", "r", stdin);
    freopen("Rices.out", "w", stdout);
    
    cin >> n;
    for (int i = 0; i <= 2000; i++) {
        if (i*3 > n) break;
        if ((n - i*3)%5 == 0) {
            cout << (n - i*3)/5 + i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}