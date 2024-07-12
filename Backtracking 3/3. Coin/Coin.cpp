#include <bits/stdc++.h>
using std::cin;
using std::cout;

long long t, n, rule[35], wat[2000000001], u[35], limit = 34, du, ma, may, smol;

int main() {
    std::ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Coin.inp", "r", stdin);
    freopen("Coin.out", "w", stdout);

    rule[1] = 2; rule[2] = 3; rule[3] = 5; rule[4] = 10; rule[5] = 18; rule[6] = 33; rule[7] = 61; rule[8] = 112; rule[9] = 206; rule[10] = 379; rule[11] = 697; rule[12] = 1282; rule[13] = 2358; rule[14] = 4337; rule[15] = 7977; rule[16] = 14672; rule[17] = 26986; rule[18] = 49635; rule[19] = 91293; rule[20] = 167914; rule[21] = 308842; rule[22] = 568049; rule[23] = 1044805; rule[24] = 1921696; rule[25] = 3534550; rule[26] = 6501051; rule[27] = 11957297; rule[28] = 21992898; rule[29] = 40451246; rule[30] = 74401441; rule[31] = 136845585; rule[32] = 251698272; rule[33] = 462945298; rule[34] = 851489155;
    may = 1; smol = 0;

    wat[2] = 1; wat[3] = 1; wat[4] = 1;
    for (int i = 4; i <= 34; i++) {
        wat[rule[i-1] + rule[i-2] + rule[i-3]] = wat[rule[i-1]] + wat[rule[i-2]] + wat[rule[i-3]];
    }
    cin >> t;
    while (may <= t) {
        n = may;

        ma = -1; limit = 34; du = 0;
        for (int i = 1; i <= limit; i++) {
            if (rule[i] > n) {
                limit = i - 1;
                break;
            }
            u[i] = 1;
        }

        check(0);
        cout << "Case #" << may << ": ";

        smol = 0;
        if (!du) generate(1);

        if (du) cout << ma;
        if (!du) cout << -1;
        cout << '\n';

        may++;
    }

    return 0;
}