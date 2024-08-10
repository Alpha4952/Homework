#include <bits/stdc++.h>
using namespace std;

int n, m, r = 0;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("Pencils.inp", "r", stdin);
    freopen("Pencils.out", "w", stdout);

    cin >> n >> m;

    while (n > 0) {
        r++;
        n--;
        if (r != 0 && r % m == 0) n++;
    }

    cout << r << endl;
    return 0;
}
