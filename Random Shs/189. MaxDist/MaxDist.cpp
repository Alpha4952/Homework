#include <bits/stdc++.h>
using namespace std;

long long t, n, a[100001], maxd;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("MaxDist.inp", "r", stdin);
    freopen("MaxDist.out", "w", stdout);
    
    cin >> t;
    while (t--) {
        cin >> n;
        
        map <long long, long long> hmm;

        maxd = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];

            if (hmm[a[i]] == 0) {
                hmm[a[i]] = i;
            } else {
                maxd = max(maxd, i - hmm[a[i]]);
            }
        }

        cout << maxd <<  '\n';
    }
}