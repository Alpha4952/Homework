#include <bits/stdc++.h>
using std::cin;
using std::cout;
using std::min;

long long dp[51][250], n, k;

int main() {
    std::ios_base::sync_with_stdio(NULL); std::cin.tie(NULL); std::cout.tie(NULL);
    freopen("Exam.inp", "r", stdin);
    freopen("Exam.out", "w", stdout);

    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        if (k >= i*2 + (n-i)*3 && k <= i*2 + (n-i)*5) {
            cout << i << std::endl;
            return 0;
        }
    }
    cout << 0 << std::endl;
    return 0;
}