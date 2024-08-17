#include <bits/stdc++.h>
using namespace std;

long long t, ants[3], d, mint1, mint2, mint3;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Ants.inp", "r", stdin);
    freopen("Ants.out", "w", stdout);

    cin >> t;
    while (t--) {
        cin >> ants[0] >> ants[1] >> ants[2] >> d;

        sort(ants, ants + 3);
        //for (int i = 0; i < 3; i++) cout << ants[i] << " "; cout << '\n';

        mint1 = 0;
        if (ants[1] - d <= ants[0]) mint1 += abs(ants[1] - d - ants[0]);
        if (ants[1] + d >= ants[2]) mint1 += abs(ants[1] + d - ants[2]);

        if (ants[0] + d <= ants[2]) mint2 = abs(ants[2] + d - ants[1]);
        else mint2 = 1e18;
        if (ants[0] + d <= ants[2]) mint3 = abs(ants[0] - d - ants[1]);
        else mint3 = 1e18;

        cout << min(mint1, min(mint2, mint3)) << '\n';
        //cout << mint1 << " " << mint2 << " " << mint3 << '\n';
    }
}