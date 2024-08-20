#include <bits/stdc++.h>
using namespace std;

long long t, a, b;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("FatherAndSon.inp", "r", stdin);
    freopen("FatherAndSon.out", "w", stdout);
    
    cin >> t;
    while (t--) {
        cin >> a >> b;

        if ((a - 2*b >= 0)) cout << a - 2*b << '\n';
        else cout << -1 << '\n';
    }
}