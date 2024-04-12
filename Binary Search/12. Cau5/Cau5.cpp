#include <iostream>
#include <fstream>
#include <algorithm>
#include <math.h>

int main() {
    std::ios_base::sync_with_stdio(NULL); std::cin.tie(NULL); std::cout.tie(NULL);
    std::freopen("Cau5.inp", "r", stdin);
    std::freopen("Cau5.out", "w", stdout);

    long long n, a[100001], r1 = 0, r2 = 0, r3 = 0, f, f2, l, twoS;
    double tar, tar2;

    std::cin >> n;
    for (int i = 0; i < n; i++) std::cin >> a[i];
    std::sort(a, a + n);

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            tar = std::sqrt(a[i] * a[i] + a[j] * a[j]);
            tar2 = std::sqrt(std::pow(std::max(a[i], a[j]), 2) - std::pow(std::min(a[i], a[j]), 2));
            twoS = a[i] + a[j];

            f = std::lower_bound(a + j + 1, a + n, tar) - a;
            f2 = std::lower_bound(a + j + 1, a + n, tar2) - a;
            l = std::min(n-1, std::lower_bound(a + j + 1, a + n, twoS-1) - a);

            r1 += f - j - 1;
            if (a[f] == tar) r2++;
            if (a[f2] == tar2 && f != f2) r2++;
            r3 += l - f2 + (f - f2)*(a[f] > tar && a[f2] > tar2);
            //std::cout << i << " " << j << " " << tar << " " << f << " " << tar2 << " " << f2 << " " << l << std::endl;
        }
    }
    std::cout << r1 << " " << r2 << " " << r3 << std::endl;
    return 0;
}