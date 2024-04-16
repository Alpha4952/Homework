#include <iostream>
#include <fstream>
#include <algorithm>

bool eh(std::pair <int, int> b, std::pair <int, int> c) {
    return b.first < c.first;
}

int main() {
    std::ios_base::sync_with_stdio(NULL); std::cin.tie(NULL); std::cout.tie(NULL);
    std::freopen("Jump.inp", "r", stdin);
    std::freopen("Jump.out", "w", stdout);

    int n, p, interating[100001], sorted[100001], pos;
    long long r;
    std::pair <int, int> a[100001];

    std::cin >> n >> p;
    for (int i = 0; i < n; i++) {
        std::cin >> sorted[i];
        interating[i] = sorted[i];
        a[i].first = interating[i];
        a[i].second = i;
    }

    std::sort(sorted, sorted + n);
    std::sort(a, a + n, eh);

    sorted[n] = 1e9;
    n++;
    for (int i = 0; i < n - 1; i++) {
        pos = std::upper_bound(sorted + i, sorted + n, interating[i] + p) - sorted - 1;
        if (sorted[pos] >= interating[i] + p) r = std::max(r, (a[pos].second - i)*1ll);
    }
    std::cout << std::max(0ll, r);
}