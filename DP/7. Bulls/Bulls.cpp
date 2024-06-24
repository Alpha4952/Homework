#include <bits/stdc++.h>
using namespace std;

long long n, k, dp[100001];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Bulls.inp", "r", stdin);
    freopen("Bulls.out", "w", stdout);
    
    cin >> n >> k;

    dp[0] = 1;
    for (int i = 1; i <= n; i++) dp[i] = (dp[i-1] + dp[max(i-k-1, 0ll)]) % 2111992;
    
    cout << dp[n] << endl;
    return 0;
}