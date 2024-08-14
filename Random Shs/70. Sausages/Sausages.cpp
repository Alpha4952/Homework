#include <bits/stdc++.h>
using namespace std;

long long n, m, hm, c;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Sausages.inp", "r", stdin);
    freopen("Sausages.out", "w", stdout);

    cin >> n >> m;

    c = 0;
    for (int i = 1; i < m; i++) {
        c += (i * n % m == 0);
    }
    
    cout << m - 1 - c << endl;
    return 0;
}