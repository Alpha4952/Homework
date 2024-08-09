#include <bits/stdc++.h>
using namespace std;

long long n, t, d[7];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Dice.inp", "r", stdin);
    freopen("Dice.out", "w", stdout);
    
    d[1] = 6; d[2] = 5; d[3] = 4; d[4] = 3; d[5] = 2; d[6] = 1;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        cout << d[t] << '\n';
    }

    return 0;
}