#include <bits/stdc++.h>
using namespace std;

long long n, minv, r, a[1000001];

int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("Alibaba.inp", "r", stdin);
    freopen("Alibaba.out", "w", stdout);

    minv = 1e9;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];

        r += a[i];
        if (a[i] % 2 && a[i] < minv) minv = a[i];
    }

    if (r % 2) cout << r - minv << endl;
    else cout << r << endl;
    return 0;
}
