#include <iostream>
#include <fstream>
#include <algorithm>

long long n, a[200001], r;

int main () {
    std::ios_base::sync_with_stdio(NULL); std::cin.tie(NULL); std::cout.tie(NULL);
    freopen("Maxval.inp", "r", stdin);
    freopen("Maxval.out", "w", stdout);
    
    std::cin >> n;
    for (int i = 0; i < n; i++) std::cin >> a[i];
    std::sort(a, a+n);

    for (int i = 0; i < n; i++) {
        r = std::max(r, a[std::lower_bound(a, a+n, 2*a[i]) - a - 1] % a[i]);
    }
    std::cout << r << '\n';
}