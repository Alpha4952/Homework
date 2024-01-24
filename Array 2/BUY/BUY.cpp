#include <bits/stdc++.h>
#define pii pair<int, int>
#define piii pair<int, pii>
#define fi first
#define sc second
using namespace std;

piii a[100001];
long long n, m, kq, c[100001], x, y, S, i;

bool cmp (piii x, piii y) {
    return x.sc.sc < y.sc.sc;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("BUY.INP" , "r" , stdin);
    freopen("BUY.OUT" , "w" , stdout);

    cin >> m >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x >> y;
        a[i] = piii(i, pii(x, y));
    }

    sort (a+1, a + 1 + n, cmp);
    kq = 0; S = 0;

    for (i = 1; i <= n; i++) {
        if (S + a[i].sc.fi > m) break;
        S += a[i].sc.fi;
        kq += a[i].sc.sc * a[i].sc.fi;
        c[a[i].fi] = a[i].sc.fi;
    }

    kq += (m - S) * a[i].sc.sc;
    c[a[i].fi] = m - S;
    cout << kq << '\n';
    for (int i = 1; i <= n; i++) cout << c[i] << '\n';
}
