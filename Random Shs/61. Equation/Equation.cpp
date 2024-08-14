#include <bits/stdc++.h>

long long a, r;

long long s(long long n) {
    long long r = 0;
    while (n) {
        r += n%10;
        n /= 10;
    }

    return r;
}

int main () {
    std::ios_base::sync_with_stdio(NULL); std::cin.tie(NULL); std::cout.tie(NULL);
    std::freopen("Equation.out", "w", stdout);
    std::freopen("Equation.inp", "r", stdin);

    std::cin >> a;
    r = 1e9;
    for (long long i = 1; i <= sqrt(a); i++) {
        if (a % i) continue;

        if (i*s(i) == a) {
            std::cout << i << std::endl;
            return 0;
        } else if ((a/i)*s(a/i) == a) {
            r = std::min(r, a/i);
            //std::cout << a/i << std::endl;
            //return 0;
        }
    }

    if (r != 1e9) std::cout << r << std::endl;
    else std::cout << -1 << std::endl;
    return 0;
}