#include <bits/stdc++.h>
using namespace std;

long long n, a[101], dp[100001], trace[100001][101], sum, s, k;
vector <int> HAHAHAHA;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("ChiaKeo.inp", "r", stdin);
    freopen("ChiaKeo.out", "w", stdout);

    sum = 0;

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];

        sum += a[i];
    }

    s = sum / 2;

    dp[0] = 1; HAHAHAHA.push_back(0);
    for (int i = 1; i <= n; i++) {
        for (int j = s; j >= a[i]; j--) {
            if (dp[j - a[i]]) {
                dp[j] = 1;
                trace[j][i] = 1;
            }
        }
    }

    //for (int i = 1; i <= s; i++) {
    //    cout << dp[i] << " ";
    //}

    for (int i = s; i > 0; i--) {
        if (dp[i]) {
            k = i;
            break;
        }
    }

    cout << sum - 2 * k << '\n';
    
    while (k > 0) {
        for (int i = 1; i <= n; i++) {
            if (trace[k][i]) {
                HAHAHAHA.push_back(i);
                k -= a[i];
                break;
            }
        }
    }

    for (int i = HAHAHAHA.size() - 1; i > 0 ; i--) cout << HAHAHAHA[i] << " ";

    return 0;
}