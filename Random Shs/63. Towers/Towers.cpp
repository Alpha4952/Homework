#include <bits/stdc++.h>
using std::cin;
using std::cout;

long long n, r;

int main() {
    std::ios_base::sync_with_stdio(NULL); std::cin.tie(NULL); std::cout.tie(NULL);
    std::freopen("Towers.inp", "r", stdin);
    std::freopen("Towers.out", "w", stdout);

    r = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        r += i * (i + 1) / 2;
    }

    cout << r << std::endl;
    return 0;
}