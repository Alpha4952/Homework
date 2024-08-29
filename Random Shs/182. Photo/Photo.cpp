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

    //for (int i = 1; i <= n; i++) cout << l[i] << " " << r[i] << '\n';
    //cout << '\n';

    for (int i = 0; i < m; i++) {
        cin >> out >> in;
        lout = l[out];
        lin = l[in];
        rout = r[out];
        rin = r[in];

        r[lout] = r[out];
        l[rout] = l[out];
        r[lin] = out;
        l[in] = out;
        l[out] = lin;
        r[out] = in;

        //for (int i = 1; i <= n; i++) {
        //    cout << l[i] << " " << r[i] << '\n';
        //}
        //cout << '\n';
    }

    for (int i = 1; i <= n; i++) {
        cout << l[i] << " " << r[i] << '\n';
    }
}