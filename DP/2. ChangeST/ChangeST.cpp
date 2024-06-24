#include <bits/stdc++.h>
#define N 100
using namespace std;

int dp[N + 3][N + 3];

string x, y;
int main() {
    freopen("changest.inp", "r", stdin);
    freopen("changest.out", "w", stdout);
    cin >> x >> y;
    int m = x.size(), n = y.size();
    x = " " + x;
    y = " " + y;
    for (int i = 1; i <= m; i++) dp[i][0] = i;
    for (int i = 1; i <= n; i++) dp[0][i] = i;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            if (x[i] == y[j]) dp[i][j] = dp[i - 1][j - 1];
            else dp[i][j] = min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1])) + 1;

    cout << dp[m][n] << '\n';
    int i = m, j = n;
    while (i > 0 || j > 0) {
        if (x[i] == y[j]) {
            i--; j--;
        } else if (i > 0 && dp[i][j] == dp[i - 1][j] + 1) {
            cout << "D " << i << '\n';
            i--;
        } else if (j > 0 && dp[i][j] == dp[i][j - 1] + 1) {
            cout << "I " << i + 1 << " " << y[j] << '\n';
            j--;
        } else if (i > 0 && j > 0 && dp[i][j] == dp[i - 1][j - 1] + 1) {
            cout << "R " << i << " " << y[j] << '\n';
            i--; j--;
        }
    }
    return 0;
}
