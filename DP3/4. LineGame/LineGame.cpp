#include <bits/stdc++.h>
using namespace std;

long long n, a[1000003], f1[1000003], f2[1000003];

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("LineGame.inp", "r", stdin);
    freopen("LineGame.out", "w", stdout);

    cin >> n;

    for (int i = 1; i <= n; i++) cin >> a[i];

    f1[1] = a[1];
    f2[1] = 0;

    for (int i = 2; i <= n; i++) {
        f1[i] = max(f1[i - 1], f2[i - 1] + a[i]);
        f2[i] = max(f2[i - 1], f1[i - 1] - a[i]);
    }

    cout << max(f1[n], f2[n]) << endl;
    return 0;
}
