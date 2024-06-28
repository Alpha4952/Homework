#include <bits/stdc++.h>
using namespace std;

long long n, m, a[1005], b[1005], dp[1005][1005], r;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("LNACS.inp", "r", stdin);
    freopen("LNACS.out", "w", stdout);
    
    cin >> n >> m;
    for (int i = 2; i <= n + 1; i++) {
        cin >> a[i];
        dp[i][0] = 0;
    }
    for (int j = 2; j <= m + 1; j++) {
        cin >> b[j];
        dp[0][j] = 0;
    }

    for (int i = 0; i <= n + 1; i++) dp[i][1] = 0;
    for (int i = 0; i <= m + 1; i++) dp[1][i] = 0;

    r = 0;
    for (int i = 2; i <= n + 1; i++) {
        for (int j = 2; j <= m + 1; j++) {
            //dp[i][j] = max(max(dp[i-2][j-2], dp[i-2][j]), dp[i][j-2]);
            if (a[i] == b[j]) {
                dp[i][j] = dp[i-2][j-2] + 1;
            } else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
            r = max(r, dp[i][j]);
        }
    }

    //for (int i = 0; i <= n + 1; i++) {
    //    for (int j = 0; j <= m + 1; j++) cout << dp[i][j] << " ";
    //    cout << '\n';
    //}

    cout << r;
}