#include <bits/stdc++.h>
using namespace std;

long long n, m, a[1002][1002], dp[1002][1002], maxg, last;
vector <long long> ehe;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Garbage.inp", "r", stdin);
    freopen("Garbage.out", "w", stdout);
    
    cin >> n >> m;
    for (int i = 1; i <= n; i++) for (int j = 1; j <= m; j++) cin >> a[i][j];
    for (int i = 1; i <= n; i++) for (int j = 1; j <= m; j++) dp[i][j] = 0;

    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i-1][j-1] >= a[i-1][j] && a[i-1][j-1] >= a[i-1][j+1]) {
                a[i][j] += a[i-1][j-1];
                dp[i][j] = j-1;
            } else if (a[i-1][j] >= a[i-1][j-1] && a[i-1][j] >= a[i-1][j+1]) {
                a[i][j] += a[i-1][j];
                dp[i][j] = j;
            } else if (a[i-1][j+1] >= a[i-1][j-1] && a[i-1][j+1] >= a[i-1][j]) {
                a[i][j] += a[i-1][j+1];
                dp[i][j] = j+1;
            }
        }
    }

    maxg = 0;
    for (int i = 1; i <= m; i++) maxg = max(maxg, a[n][i]);

    for (int i = 1; i <= m; i++) {
        if (a[n][i] == maxg) {
            ehe.push_back(i);
            break;
        }
    }

    for (int i = n; i >= 2; i--) ehe.push_back(dp[i][ehe[ehe.size()-1]]);

    cout << maxg << '\n';
    for (int i = ehe.size() - 1; i >= 0; i--) cout << ehe[i] << '\n';
    return 0;
}