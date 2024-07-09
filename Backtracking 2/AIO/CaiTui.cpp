#include <bits/stdc++.h>
using std::cin;
using std::cout;

long long n, m, dp[501][501], ws[501], vs[501];

int main() {
    std::ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("CaiTui.inp", "r", stdin);
    freopen("CaiTui.out", "w", stdout);
    
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> ws[i] >> vs[i];
    }

    for (int i = 0; i <= m; i++) dp[0][i] = 0;
    for (int i = 1; i <= n; i++) dp[i][0] = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (j < ws[i]) dp[i][j] = dp[i-1][j];
            else {
                dp[i][j] = std::max(dp[i-1][j], dp[i - 1][j - ws[i]] + vs[i]);
            }
        }
    }

    cout << dp[n][m] << std::endl;
    return 0;
}