#include <bits/stdc++.h>
using namespace std;

long long n, dp[10001][10001];
string s;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Palin.inp", "r", stdin);
    freopen("Palin.out", "w", stdout);

    cin >> n >> s;

    for (int i = 0; i <= n; i++) for (int j = 0; j <= n; j++) dp[i][j] = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (s[i - 1] == s[n - j]) dp[i][j] = dp[i - 1][j - 1] + 1;
            else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    cout << n - dp[n][n] << '\n';
    return 0;
}