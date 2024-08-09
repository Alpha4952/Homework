#include <bits/stdc++.h>
using namespace std;

double t, l, r, a, b, d, c;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("CountDiv.inp", "r", stdin);
    freopen("CountDiv.out", "w", stdout);

    cin >> t;
    while (t) {
        t--;

        cin >> l >> r >> a >> b;
        if (l > r) {
            cout << 0 << '\n';
            continue;
        }

        d = a * b / __gcd((long long) a, (long long) b);
        if (c < r) c = floor(r/d) - ceil(l/d) + 1;
        else c = 0;
        cout << floor(r/a) - ceil(l/a) + 1 + floor(r/b) - ceil(l/b) + 1 - c << '\n';
    }

    return 0;
}