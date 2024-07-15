#include <bits/stdc++.h>
using namespace std;

long long n, t[100001], r[100001], dp[100001], eh;
vector <long long> getTFOut;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Tick.inp", "r", stdin);
    freopen("Tick.out", "w", stdout);

    cin >> n;
    for (int i = 1; i <= n; i++) cin >> t[i];
    for (int i = 1; i < n; i++) cin >> r[i];

    dp[0] = 0; dp[1] = t[1];
    for (int i = 2; i <= n; i++) {
        dp[i] = t[i] + dp[i-1];
        eh = dp[i-2] + r[i-1];

        if (eh < dp[i]) {
            dp[i] = eh;
            getTFOut.push_back(i);
        }
    }

    cout << dp[n] << '\n';
    if (getTFOut.size()) {
        for (int i = 0; i < getTFOut.size(); i++) cout << getTFOut[i] << " ";
        cout << endl;
    } else cout << 0 << endl;

    return 0;
}