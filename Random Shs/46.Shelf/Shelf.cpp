#include <bits/stdc++.h>
using namespace std;

int a1, a2, a3, b1, b2, b3, n, sum1, sum2;

int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("Shelf.inp", "r", stdin);
    freopen("Shelf.out", "w", stdout);

    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    cin >> n;

    if ((a1 + a2 + a3 + 5 - 1) / 5 + (b1 + b2 + b3 + 10 - 1) / 10 <= n) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
