#include <bits/stdc++.h>
using namespace std;

long long t, a, b, c;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Team.inp", "r", stdin);
    freopen("Team.out", "w", stdout);
    
    cin >> t;
    for (int _ = 0; _ < t; _++) {
        cin >> a >> b >> c;

        cout << min((a + b + c)/3, min(a, b)) << '\n';
    }

    return 0;
}