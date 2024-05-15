#include <bits/stdc++.h>

long long n, idx[100001], h[100001], a[100001], prev[100001], f[100001], x[100001], slx, u;

int main() {
    std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);
    std::freopen("Wires.inp", "r", stdin);
    std::freopen("Wires.out", "w", stdout);

    std::cin >> n;
    for (int i = 1; i <= n; i++) std::cin >> a[i];
    for (int i = 1; i <= n; i++) h[i] = n;
    
    h[0] = -1;

    for (int i = 1; i <= n; i++) {
        u = std::lower_bound(h, h+n+1, a[i]) - h - 1;
        f[i] = u + 1;
        prev[i] = idx[u];

        if (a[i] < h[u+1]) {
            h[u+1] = a[i];
            idx[u+1] = i;
        }
    }

    u = 1;

    for (int i = 1; i <= n; i++) if (f[i] > f[u]) u = i;

    slx = 0;
    while (u > 0) {
        slx++;
        x[slx] = a[u];
        u = prev[u];
    }

    std::cout << slx << std::endl;
    for (int i = slx; i >= 1; i--) std::cout << x[i] << " ";
    std::cout << std::endl;
    return 0;
}