#include <bits/stdc++.h>
using namespace std;

long long t, n, p, pp, c;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("PowerOfPrime.inp", "r", stdin);
    freopen("PowerOfPrime.out", "w", stdout);
    
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> p;

        pp = p;
        c = 0;

        while (pp <= n) {
            c += n/pp;
            pp *= p;
        }

        cout << c << '\n';
    }

    return 0;
}