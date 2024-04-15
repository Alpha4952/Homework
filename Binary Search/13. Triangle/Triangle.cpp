#include <bits/stdc++.h>

long long q, n, w, a[1001], b[1001], c[1001], res, nexti, nextj;

long long q1() {
    long long r, b1, c1;

    for (int i = 0; i < n; i++) {
        b1 = std::lower_bound(b, b + n, a[i]) - b;
        c1 = std::lower_bound(c, c + n, a[i]) - c;

        r += ((std::upper_bound(a, a + n, a[i]) - a) - (std::lower_bound(a, a + n, a[i]) - a)) * ((std::upper_bound(b, b + n, a[i]) - b) - b1) * (a[i] == b[b1]) * ((std::upper_bound(c, c + n, a[i]) - c) - c1) * (a[i] == c[c1]);

        i = std::upper_bound(a + i, a + n, a[i]) - a - 1;
    }

    return r;
}

long long q2() {
    long long r;
    int maxl, minl, cau, cal, cbu, cbl, cmin, cmax;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            minl = abs(a[i] - b[j]) + 1;
            maxl = a[i] + b[j] - 1;
            
            if (a[i] == b[j]) {
                r += (std::upper_bound(c, c + n, maxl) - c) - (std::lower_bound(c, c + n, minl) - c);
            } else {
                cmin = std::lower_bound(c, c + n, minl) - c;
                cmax = std::upper_bound(c, c + n, maxl) - c;

                cal = std::lower_bound(c + cmin, c + cmax, a[i]) - c;
                cau = std::upper_bound(c + cal, c + cmax, a[i]) - c;
                cbl = std::lower_bound(c + cmin, c + cmax, b[j]) - c;
                cbu = std::upper_bound(c + cbl, c + cmax, b[j]) - c;

                if (cau > cbu - 1) {
                    if (cal > cbu - 1) r += cbu - cbl + cau - cal;
                    else if (cal > cbl) r += cau - cbl;
                    else r += cau - cal;
                } else {
                    if (cbl > cau - 1) r += cau - cal + cbu - cbl;
                    else if (cbl > cal) r += cbu - cal;
                    else r += cbu - cbl;
                }
            }
        }
    }

    return r;
}

long long q3() {
    long long r;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            r += std::upper_bound(c, c + n, a[i] + b[j] - 1) - (std::lower_bound(c, c + n, abs(a[i] - b[j]) + 1));
        }
    }
    return r;
}

int main() {
    std::ios_base::sync_with_stdio(NULL); std::cin.tie(NULL); std::cout.tie(NULL);
    std::freopen("Triangle.inp", "r", stdin);
    std::freopen("Triangle.out", "w", stdout);

    std::cin >> q;
    for (int i = 0; i < q; i++) {
        std::cin >> n >> w;
        for (int j = 0; j < n; j++) std::cin >> a[j];
        for (int j = 0; j < n; j++) std::cin >> b[j];
        for (int j = 0; j < n; j++) std::cin >> c[j];

        std::sort(a, a + n);
        std::sort(b, b + n);
        std::sort(c, c + n);

        if (w == 1) res = q1();
        else if (w == 2) res = q2();
        else if (w == 3) res = q3();
        std::cout << res << std::endl;
    }
}