#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(NULL); std::cin.tie(NULL); std::cout.tie(NULL);
    std::freopen("Familiar.inp", "r", stdin);
    std::freopen("Familiar.out", "w", stdout);

    int n, a[300003], thatValue, r;

    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    a[0] = 0;
    sort(a + 1, a + n + 1);

    for (int i = n; i > 0; i--) {
        if (a[i] + n - i + 1 < thatValue) break;
        thatValue = max(thatValue, a[i] + n-i+1);
    }
    r = lower_bound(a, a + n + 1, thatValue - n) - a - 1;
    //cout << thatValue << " " << a[r] << " " << r << " ";

    cout << n - r << endl;
    return 0;
}