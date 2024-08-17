#include <bits/stdc++.h>
using namespace std;

long long n, t, r;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("MaxElement.inp", "r", stdin);
    freopen("MaxElement.out", "w", stdout);
    
    cin >> n;
    r = -1e18;
    for (int i = 0; i < n; i++) {
        cin >> t;

        r = max(r, t);
    }

    cout << r << endl;
    return 0;
}