#include <bits/stdc++.h>
using namespace std;

int dp[500][500];

int main() {
    freopen("exam.inp", "r", stdin);
    freopen("exam.out", "w", stdout);
    int n, k;
    cin >> n >> k;
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= k; ++j) {
            dp[i][j] = 1e9;
        }
    }
    dp[0][0] = 0;
    int point[] = {2, 3, 4, 5};

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= k; j++) {
            for (int d = 0; i < 4; i++) {
                if (j >= d && dp[i - 1][j - d] != 1e9) {
                    int dem = dp[i - 1][j - d] + (d == 2 ? 1 : 0);
                    dp[i][j] = min(dp[i][j], dem);
                }
            }
        }
    }

    if (dp[n][k] == 1e9) cout << 0 << endl;
    else cout << dp[n][k] << endl;
    return 0;
}
