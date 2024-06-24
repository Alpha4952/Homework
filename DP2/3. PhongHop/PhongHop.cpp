#include <bits/stdc++.h>
using namespace std;

struct phong {
    int l, r, id;
    bool operator < (phong const& X) const {
        return (r < X.r);
    }
} a[1001];

int x[1001], n, res = 1;

int main() {
    freopen("phonghop.inp", "r", stdin);
    freopen("phonghop.out", "w", stdout);

    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> a[i].l >> a[i].r;
        a[i].id = i;
    }

    sort(a + 1, a + n + 1);
    int i = 1; x[1] = a[1].id;

    for (int j = 2; j <= n; j++) {
        if (a[i].r <= a[j].l) {
            res++;
            x[res] = a[j].id;
            i = j;
        }
    }

    cout << res << '\n';

    for (int i = 1; i <= res; i++) cout << x[i] << ' ';
    return 0;
}
