#include <bits/stdc++.h>
using namespace std;

long long t, a, b, c, d;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Candies.inp", "r", stdin);
    freopen("Candies.out", "w", stdout);
    
    cin >> t;
    for (int _ = 0; _ < t; _++) {
        cin >> a >> b >> c >> d;

        if (a + b == c + d) cout << "YES";
        else if (a + c == b + d) cout << "YES";
        else if (a + d == c + b) cout << "YES";
        else if (a == b + c + d || b == a + c + d || c == a + b + d || d == a + b + c) cout << "YES";
        else cout << "NO";

        cout << '\n';
    }

    return 0;
}