#include <bits/stdc++.h>
using namespace std;

long long t, n, x, a, b, na, nb;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Swap.inp", "r", stdin);
    freopen("Swap.out", "w", stdout);
    
    cin >> t;
    while (t--) {
        cin >> n >> x >> a >> b;

        na = min(a, b);
        nb = max(a, b);
        a = na;
        b = nb;

        na = max(1ll, a - x);
        x -= (a - na);
        nb = min(n, b + x);
        x -= (nb - b);
        cout << nb - na << '\n';
    }
}