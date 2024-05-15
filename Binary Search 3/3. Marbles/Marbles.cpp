#include <bits/stdc++.h>
using namespace std;

long long n, m, u, v, r, res, an[50001], am[50001], c, b, ymin, ymax;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Marbles.inp", "r", stdin);
    freopen("Marbles.out", "w", stdout);

    cin >> n >> m >> u >> v >> r;
    for (int i = 0; i < n; i++) cin >> an[i];
    sort(an, an + n);
    for (int i = 0; i < m; i++) cin >> am[i];
    sort(am, am + m);

    for (int i = 0; i < n; i++) {
        if (pow(r, 2) - pow(an[i] - u, 2) < 0) continue;

        c += upper_bound(am, am + m, v + sqrt(pow(r, 2) - pow(an[i] - u, 2))) - lower_bound(am, am + m, v - sqrt(pow(r, 2) - pow(an[i] - u, 2)));
        //cout << c << endl;
    }
    res = abs(m*n - c*2);
    cout << res << '\n';
    return 0;
}