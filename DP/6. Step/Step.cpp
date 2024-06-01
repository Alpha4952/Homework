#include <bits/stdc++.h>
using namespace std;

long long n, m, dp[1001], t;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Step.inp", "r", stdin);
    freopen("Step.out", "w", stdout);

    cin >> n >> m;
    fill(dp, dp+n+1, 0);
    for (int i = 0; i < m; i++) {
        cin >> t;
        dp[t] = -1;
    }

    if (dp[1] != -1) dp[1] = 1;
    if (dp[2] != -1) {
        if (dp[1] == 1) dp[2] = 2;
        else dp[2] = 1;
    }

    for (int i = 3; i <= n; i++) if (dp[i] != -1) {
        if (dp[i] == -1) continue;
        if (dp[i-1] != -1) dp[i] += dp[i-1];
        if (dp[i-2] != -1) dp[i] += dp[i-2];

        if (dp[i] >= 13051984) dp[i] -= 13051984;
    }

    if (dp[n] != -1) cout << dp[n] << endl;
    else cout << 0;
    return 0;
}