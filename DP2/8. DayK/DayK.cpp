#include <bits/stdc++.h>
using namespace std;

long long n, k, a[1001], dp[1001][101];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("DayK.inp", "r", stdin);
    freopen("DayK.out", "w", stdout);

    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] = (a[i]%k);
    }

    for (int i = 0; i < k; i++) dp[0][i] = -(1e9);

    dp[1][a[1]] = 1; dp[0][0] = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < k; j++) {
            dp[i][j] = max(dp[i - 1][j], dp[i - 1][(j - a[i] + k) % k] + 1);
        }
    }

    cout << dp[n][0] << endl;
    return 0;
}