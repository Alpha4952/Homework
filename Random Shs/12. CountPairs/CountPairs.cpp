#include <bits/stdc++.h>
using namespace std;

long long t, k, a, hmm;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("CountPairs.inp", "r", stdin);
    freopen("CountPairs.out", "w", stdout);

    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> k;

        hmm = 0;
        for (int i = 1; i < k-1; i++) {
            hmm += max(0ll, min(k - i, k-1) - i);
        }

        cout << hmm << '\n';
    }
}