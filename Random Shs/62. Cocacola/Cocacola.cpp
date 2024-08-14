#include <bits/stdc++.h>
using std::cin;
using std::cout;

long long a, b, c, d;

int main () {
    std::ios_base::sync_with_stdio(NULL); std::cin.tie(NULL); std::cout.tie(NULL);
    std::freopen("Cocacola.inp", "r", stdin);
    std::freopen("Cocacola.out", "w", stdout);
    
    cin >> a >> b >> c;

    a += b; d = 0;
    while (a >= c) {
        d += a/c;
        a = (a/c) + a%c;
    }

    cout << d << std::endl;
}