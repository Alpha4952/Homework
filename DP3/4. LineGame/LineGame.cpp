#include <bits/stdc++.h>
using namespace std;

long long n, a[1000003], F1[1000003], F2[1000003];

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("LineGame.inp", "r", stdin);
    freopen("LineGame.out", "w", stdout);

    cin >> n;

    for (int i = 1; i <= n; i++) cin >> a[i];

    F1[1] = a[1];
    F2[1] = 0;

    for (int i = 2; i <= n; i++) {
        F1[i] = max(F1[i - 1], F2[i - 1] + a[i]);
        F2[i] = max(F2[i - 1], F1[i - 1] - a[i]);
    }
    
    cout << max(F1[n], F2[n]);
    return 0;
}
