#include <bits/stdc++.h>
using namespace std;

long long n, q, a[100001], s, e;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("SumQueries.inp", "r", stdin);
    freopen("SumQueries.out", "w", stdout);
    
    cin >> n >> q;
    a[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] += a[i-1];
    }

    for (int i = 0; i < q; i++) {
        cin >> s >> e;
        cout << a[e] - a[s-1] << '\n';
    }
}