#include <bits/stdc++.h>
using namespace std;

long long t;
double x, damn[68100002];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("MaxPositive.inp", "r", stdin);
    freopen("MaxPositive.out", "w", stdout);

    damn[1] = double(1);
    for (int i = 2; i <= 68100001; i++) {
        damn[i] = (double) double(1 / double(i * 2 - 1)) + double(damn[i - 1]);
        //if (i >= 6e7) cout << damn[i] << '\n';
    }

    cin >> t;
    while (t--) {
        cin >> x;

        cout << lower_bound(damn + 1, damn + 68100001, x) - damn << '\n';
    }
}