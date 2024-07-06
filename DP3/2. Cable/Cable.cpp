#include <bits/stdc++.h>
using namespace std;

long long n, a[100001], dp[10001];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Cable.inp", "r", stdin);
    freopen("Cable.out", "w", stdout);
    
    cin >> n;
    a[1] = 0; a[2] = 0; a[3] = 0;
    for (int i = 2; i <= n + 1; i++) cin >> a[i];

    dp[0] = 0;
    dp[1] = a[1];
    dp[2] = a[2];
    dp[3] = dp[2] + a[3];

    for (int i = 4; i <= n; i++) {
        dp[i] = min(dp[i-1], dp[i-2]) + a[i];
    }

    //for (int i = 1; i <= n; i++) cout << dp[i] << " ";
    //cout << '\n';

    cout << dp[n] << endl;
    return 0;
}