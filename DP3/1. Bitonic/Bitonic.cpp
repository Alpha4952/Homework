#include <bits/stdc++.h>
using namespace std;

long long n, a[100001], asc[100001], des[100001], r;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Bitonic.inp", "r", stdin);
    freopen("Bitonic.out", "w", stdout);

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        asc[i] = a[i];
        des[i] = a[i];
    }

    for (int i = 2; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            if (a[i] > a[j]) asc[i] = max(asc[i], asc[j] + a[i]);
        }
    }

    for (int i = n - 1; i > 0; i--) {
        for (int j = n; j > i; j--) {
            if (a[i] > a[j]) des[i] = max(des[i], des[j] + a[i]);
        }
    }

    r = 0;
    for (int i = 1; i <= n; i++) {
        r = max(r, asc[i] + des[i] - a[i]);
    }

    cout << r << endl;
    return 0;
}