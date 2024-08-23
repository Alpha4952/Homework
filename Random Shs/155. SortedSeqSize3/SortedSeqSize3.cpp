#include <bits/stdc++.h>
using namespace std;

long long t, n, a[100001], b[100001], uhm;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("SortedSeqSize3.inp", "r", stdin);
    freopen("SortedSeqSize3.out", "w", stdout);

    cin >> t;
    while (t--) {
        cin >> n;

        b[1] = 1; uhm = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            b[i] = 1;

            for (int j = 1; j < i; j++) {
                if (a[j] < a[i]) b[i] = max(b[i], b[j] + 1);
            }
            if (b[i] == 3) {
                uhm = 1;
                break;
            }
        }

        if (uhm) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}