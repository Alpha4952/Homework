#include <bits/stdc++.h>
using namespace std;

long long t, bread, beef, chicken, b, c, r;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Burgers.inp", "r", stdin);
    freopen("Burgers.out", "w", stdout);

    cin >> t;
    while (t--) {
        cin >> bread >> beef >> chicken >> b >> c;

        r = 0;
        if (b == c) {
            r += b*(min(bread/2, beef + chicken));
        }
        else if (b > c) {
            r += b*(min(bread/2, beef));
            bread -= r/b * 2;

            r += c*(min(bread/2, chicken));
        } else {
            r += c*(min(bread/2, chicken));

            bread -= r/c * 2;

            r += b*(min(bread/2, beef));
        }

        cout << r << '\n';
    }

    return 0;
}