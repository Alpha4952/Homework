#include <bits/stdc++.h>
using namespace std;

int n, x, p1, p2, a[100001], b[100001];
long long r1, r2, r3;

int s(int x, int l, int r) {
    int p = -1, d = l, mid;
    while (l <= r) {
        mid = (l + r) / 2;

        if (b[mid] < x) {
            p = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }
    if (p >= d) return p - d + 1;
    return 0;
}

int p(int x, int l, int r) {
    int p = n + 1, c = r, mid;
    while (l <= r) {
        mid = (l + r) / 2;

        if (x < b[mid]) {
            p = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    if (p <= c) return c - p + 1;
    return 0;
}

int r(int x, int p1, int p2) {
    int x1 = lower_bound(b + p1, b + p2, x) - b;
    int x2 = upper_bound(b + p1, b + p2, x) - b - 1;
    if (b[x1] == x && x2 >= x1) return x2 - x1 + 1;
    return 0;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("cau5.inp", "r", stdin);
    freopen("cau5.out", "w", stdout);

    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);

    a[n] = 1e4;
    n++;

    for (int i = 0; i < n; i++) b[i] = a[i] * a[i];

    for (int i = 0; i < n - 3; i++) {
        for (int j = i + 1; j < n - 2; j++) {
            p1 = upper_bound(a + j + 1, a + n, a[i] - a[j]) - a;
            p2 = lower_bound(a + j + 1, a + n, a[i] + a[j]) - a - 1;

            if (p1 <= p2 && p2 > j) {
                x = b[i] + b[j];

                r1 += s(x, p1, p2);
                r2 += r(x, p1, p2 + 1);
                r3 += p(x, p1, p2);
            }
        }
    }

    cout << r1 << " " << r2 << " " << r3 << endl;
    return 0;
}
