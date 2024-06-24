#include <bits/stdc++.h>
using std::cin;
using std::cout;

long long n, v, a[101], b[101], dp[1001][1001], ii, ij;
std::vector <long long> ehe;

int main() {
    std::ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("CayKhe.inp", "r", stdin);
    freopen("CayKhe.out", "w", stdout);
    
    cin >> n >> v;
    for (int i = 1; i <= n; i++) {
        cin >> a[i] >> b[i];
        dp[i][0] = 0;
    }
    for (int i = 0; i <= v; i++) dp[0][i] = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= v; j++) {
            if (b[i] > j) dp[i][j] = dp[i-1][j];
            else dp[i][j] = std::max(dp[i-1][j], dp[i-1][j-b[i]] + a[i]);
        }
    }



    cout << dp[n][v] << '\n';
    
    ii = n; ij = v;
    while (ii >= 1 && ij >= 1) {
        while (dp[ii][ij] == dp[ii][ij-1]) ij--;
        while (dp[ii][ij] == dp[ii-1][ij]) ii--;

        ehe.push_back(ii);
        ij -= b[ii];
        ii--;
    }
    cout << ehe.size() << " ";
    for (int i = ehe.size() - 1; i >= 0; i--) cout << ehe[i] << " ";

    return 0;
}