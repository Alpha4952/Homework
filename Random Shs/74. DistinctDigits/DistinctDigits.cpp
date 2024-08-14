#include <bits/stdc++.h>
using namespace std;

long long l, r;

bool check(long long n) {
    long long used[10];
    fill(used, used + 10, 0);

    while (n) {
        if (used[n%10]) return false;

        used[n%10] = 1;
        n /= 10;
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("DistinctDigits.inp", "r", stdin);
    freopen("DistinctDigits.out", "w", stdout);
    
    cin >> l >> r;
    for (int i = l; i <= r; i++) {
        if (check(i)) {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}