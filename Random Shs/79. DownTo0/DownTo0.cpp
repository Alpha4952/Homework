#include <bits/stdc++.h>
using namespace std;

long long t, a, b;

bool check(long long a, long long b) {
    if ((2 * b - a) % 3 == 0 && (2 * a - b) % 3 == 0 && (2 * b - a) / 3 >= 0 && (2 * a - b) / 3 >= 0) {
        return true;
    }

    return false;
}

int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("DownTo0.inp", "r", stdin);
    freopen("DownTo0.out", "w", stdout);

    cin >> t;

    while (t--) {
        cin >> a >> b;

        if (check(a, b)) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }

    return 0;
}
