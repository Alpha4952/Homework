#include <bits/stdc++.h>
using namespace std;

long long t, n, b;

void binary_convrt(long long n) {
    long long eh;
    for (int i = 40; i >= 0; i--) {
        eh = pow(2, i);
        if (n >= eh) {
            n -= eh;
            b++;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Parity.inp", "r", stdin);
    freopen("Parity.out", "w", stdout);
    
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;

        b = 0;

        binary_convrt(n);

        if (b % 2) cout << "odd" << '\n';
        else cout << "even" << '\n';
    }
    
    return 0;
}