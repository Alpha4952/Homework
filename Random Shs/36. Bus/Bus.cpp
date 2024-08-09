#include<bits/stdc++.h>
using namespace std;

long long m, n, a, b, r;

int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("Bus.inp", "r", stdin);
    freopen("Bus.out", "w", stdout);

    cin >> n >> m >> a >> b;

    if (m >= n) {
        if (b < n * a) cout << b;
        else cout << n * a;
    } else {
        r = n * a;

        if (n % m == 0) r = min(r, (n / m) * b);
        else {
            r = min(r, min(((n / m) + 1) * b, (n / m) * b + (n % m) * a));
        }
        cout << r << endl;
    }
    return 0;
}
