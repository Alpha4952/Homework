#include <bits/stdc++.h>
using namespace std;

long long n, p, l, s, w[1000001], v[1000001], d[1000001];
float dp[1000001], t[1000001], maxv;
vector <long long> hmm;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("CarGroup.inp", "r", stdin);
    freopen("CarGroup.out", "w", stdout);

    cin >> n >> p >> l;

    for (int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
        t[i] = l / v[i];
    }

    for (int i = 1; i <= n; i++) {
        dp[i] = 1e9;
        s = 0;
        maxv = 0;
        
        for (int j = i; j >= 1; j--) {
            if (s + w[j] > p) break;

            s += w[j];
            maxv = max(maxv, t[j]);

            if (dp[i] > dp[j - 1] + maxv) {
                dp[i] = dp[j - 1] + maxv;
                d[i] = j - 1;
            }
        }
    }

    cout << setprecision(2) << fixed << dp[n] << '\n';
    cout << setprecision(0); 

    hmm.push_back(n);
    int i = d[n];

    while (i > 0) {
        hmm.push_back(i);
        i = d[i];
    }

    for (int i = hmm.size() - 1; i >= 0; i--) cout << hmm[i] << " ";
    return 0;
}
