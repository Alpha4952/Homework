#include <bits/stdc++.h>
using namespace std;

long long n, m, dp[1001][1001], a[1001], b[1001], r1[1001], r2[1001], r3[1001], c;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Comseq.inp", "r", stdin);
    freopen("Comseq.out", "w", stdout);
    
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= m; i++) cin >> b[i];

    for (int i = 0; i <= n; i++) for (int j = 0; j <= m; j++) dp[i][j] = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i] == b[j]) dp[i][j] = dp[i-1][j-1] + 1;
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }

    int i = n, j = m;
    c = 0;
    while (i >= 1 && j >= 1) {
        while (dp[i][j-1] == dp[i][j]) j--;
        while (dp[i-1][j] == dp[i][j]) i--;
        
        r1[c] = a[i];
        r2[c] = i;
        r3[c] = j;
        c++;
        if (dp[i-1][j-1] == 0) break;
        i--;
        j--;
    }

    cout << dp[n][m] << '\n';
    for (int i = c-1; i >= 0; i--) cout << r1[i] << " ";
    cout << '\n';
    for (int i = c-1; i >= 0; i--) cout << r2[i] << " ";
    cout << '\n';
    for (int i = c-1; i >= 0; i--) cout << r3[i] << " ";
    cout << '\n';
    return 0;
}