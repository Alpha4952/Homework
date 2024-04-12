#include <bits/stdc++.h>
using namespace std;

long long a, b, m, dif = 1e10, us, ds, c, r, u, d;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Bai1.inp", "r", stdin);
    freopen("Bai1.out", "w", stdout);

    cin >> a >> b;

    u = b; d = a;
    while (d <= u) {
        m = (d + u) / 2;
        us = (b - m) * (b + m + 1) / 2;
        ds = (m - a + 1) * (a + m) / 2;
        
        if (abs(us - ds) < dif) {
            dif = abs(us - ds);
            r = m;
        }

        if (us > ds) d = m + 1;
        else u = m - 1;
    }
    cout << r;
}