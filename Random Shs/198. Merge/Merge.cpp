#include <bits/stdc++.h>
using namespace std;

long long t, n, c, temp, hmm[3];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Merge.inp", "r", stdin);
    freopen("Merge.out", "w", stdout);
    
    cin >> t;
    while (t--) {
        cin >> n;
        fill(hmm, hmm + 3, 0);
        for (int i = 0; i < n; i++) {
            cin >> temp;

            hmm[temp%3]++;
        }

        c = hmm[0];
        c += min(hmm[2], hmm[1]);
        hmm[2] -= (c - hmm[0]);
        hmm[1] -= (c - hmm[0]);

        if (hmm[1] >= 3) c += hmm[1]/3;
        if (hmm[2] >= 3) c += hmm[2]/3;

        cout << c << '\n';
    }
}