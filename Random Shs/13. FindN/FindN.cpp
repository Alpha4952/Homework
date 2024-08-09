#include <bits/stdc++.h>
using namespace std;

long long t, n, ccluster, cluster, s[100];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("FindN.inp", "r", stdin);
    freopen("FindN.out", "w", stdout);

    cin >> t;
    for (int _ = 0; _ < t; _++) {
        cin >> n;

        ccluster = 0;
        for (int i = 1; i <= 100; i++) {
            ccluster += pow(2, i);
            s[i] = ccluster;
            if (ccluster >= n) {
                cluster = i;
                break;
            }
        }

        while (cluster) {
            if ((n - s[cluster - 1]) <= pow(2, cluster) / 2) {
                cout << 4;
                n -= pow(2, cluster - 1);
            } else {
                cout << 7;
                n -= pow(2, cluster - 1) + pow(2, cluster) / 2;
            }
            cluster--;
        }
        cout << '\n';
    }

    return 0;
}