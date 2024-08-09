#include <bits/stdc++.h>
using namespace std;

long long n;

int main() {
    ios_base::sync_with_stdio(NULL); std::cin.tie(NULL); std::cout.tie(NULL);
    freopen("Calc.inp", "r", stdin);
    freopen("Calc.out", "w", stdout);
    cin >> n;
    if (n % 2 == 0) cout << n / 2;
    else cout << -(n + 1) / 2;
    return 0;
}
