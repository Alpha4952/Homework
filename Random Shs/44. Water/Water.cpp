#include<bits/stdc++.h>
using namespace std;

long long a[1000001], n, k, r;

int main() {
    freopen("Water.inp", "r", stdin);
    freopen("Water.out", "w", stdout);

    cin >> n >> k;

    for (int i = 1; i <= n; i++) cin >> a[i];

    r = 1e9;
    for (int i = 1; i <= n; i++) {
        if (k % a[i] == 0) {
            r = min(r, k / a[i]);
        }
    }

    cout << r << endl;
    return 0;
}
