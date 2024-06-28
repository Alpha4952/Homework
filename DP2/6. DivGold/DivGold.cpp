#include <bits/stdc++.h>

using namespace std;
int a[100001], s, sum, n, k;
int dp[1000003];

int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("divgold.inp", "r", stdin);
    freopen("divgold.out", "w", stdout);

    sum = 0;

    cin >> n;
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
        sum += a[i];
    }

    s = sum / 2;

    fill(dp + 1, dp + sum + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = s; j >= a[i]; j--) {
            if (dp[j - a[i]] > 0) {
                dp[j] = (dp[j] + dp[j - a[i]]) % 1000000;
            }
        }
    }

    for (int j = s; j > 0; j--) {
        if (dp[j] > 0) {
            k = j;
            break;
        }
    }

    //for (int i = 0; i <= k; i++) cout << dp[i] << " ";
    //cout << '\n';

    cout << sum - 2 * k << "\n";
    cout << dp[k];
    return 0;
}
