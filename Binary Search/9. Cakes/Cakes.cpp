#include <bits/stdc++.h>

long long n, m, low, high, mid, res, a[21];

bool check (long long x) {
    long long t = 0;
    for (int i = 1; i <= n; i++) t += x / a[i];
    return t >= m;
}

int main() {
    std::ios_base::sync_with_stdio(0), std::cin.tie(0), std::cout.tie(0);
    freopen("CAKEs.INP", "r", stdin);
    freopen("CAKEs.OUT", "w", stdout);
    std::cin >> m >> n;

    for (int i = 1; i <= n; i++) std::cin >> a[i];
    std::sort(a + 1, a + n + 1);

    high = a[n] * m;
    while (low <= high) {
        mid = (low + high) / 2;
        if (check(mid)) { //mid is higher than the actual time
            res = mid;
            high = mid - 1;
        } else low = mid + 1;
    }
    std::cout << res;
}
