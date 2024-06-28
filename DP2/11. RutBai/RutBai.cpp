#include <bits/stdc++.h>
using namespace std;

long long dp[102][102], a[102], n;

int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("rutbai.inp", "r", stdin);
    freopen("rutbai.out", "w", stdout);

    cin >> n;
    
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n - 2; i++)
        dp[i][i + 2] = a[i] * a[i + 1] * a[i + 2];
    
    for (int l = 3; l < n; l++)
        for (int i = 1; i <= n - l; i++) {
            int j = i + l;

            dp[i][j] = 1e9;

            for (int k = i + 1; k < j; k++) dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j] + a[i] * a[k] * a[j]);
        }

    cout << dp[1][n];
    return 0;
}
