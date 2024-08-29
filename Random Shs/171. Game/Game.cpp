#include <bits/stdc++.h>
using namespace std;

long long n, t, temp, hmm[100001];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Game.inp", "r", stdin);
    freopen("Game.out", "w", stdout);

    cin >> n;
    fill(hmm, hmm + 1 + n, 1);
    for (int i = 0; i < 2; i++) {
        cin >> t;
        while (t--) {
            cin >> temp;
            hmm[temp] = 0;
        }
    }

    for (int i = 1; i <= n; i++) {
        if (hmm[i]) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    return 0;
}