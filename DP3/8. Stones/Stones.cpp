#include <bits/stdc++.h>
using namespace std;

long long n, dp[103][103], a[103], s[103];

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("Stones.inp", "r", stdin);
    freopen("Stones.out", "w", stdout);

    cin >> n;
    s[0] = 0;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
    }

    for (int l = 1; l <= n - 1; l++) {
        for (int i = 1; i <= n - 1; i++) {
            int j = i + l;

            dp[i][j] = 1e9;

            for (int k = i; k <= j - 1; k++) dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + s[j] - s[i - 1]);
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) cout << dp[i][j] << " ";
        cout << '\n';
    }

    cout << dp[1][n];
    return 0;
}
