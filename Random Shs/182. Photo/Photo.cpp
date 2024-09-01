#include <bits/stdc++.h>
using namespace std;

long long n, m, out, in, lout, lin, rout, rin;
map <long long, long long> l, r;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Photo.inp", "r", stdin);
    freopen("Photo.out", "w", stdout);

    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        l[i] = i - 1;
        r[i] = i + 1;
    }
    l[1] = 0; r[n] = 0;

    for (int i = 0; i < m; i++) {
        cin >> out >> in;

        if (l[out] != 0) r[l[out]] = r[out];
        if (r[out] != 0) l[r[out]] = l[out];
        r[l[in]] = out;
        l[out] = l[in];
        r[out] = in;
        l[in] = out;
    }

    for (int i = 1; i <= n; i++) {
        cout << l[i] << " " << r[i] << '\n';
    }
}