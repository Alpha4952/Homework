#include <bits/stdc++.h>
using namespace std;

long long t, n, a[101];
string s;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("GoodString.inp", "r", stdin);
    freopen("GoodString.out", "w", stdout);
    
    cin >> t;
    while (t--) {
        cin >> s;

        n = s.length();

        fill(a, a + 101, 0);

        for (int i = 0; i < n; i++) {
            a[i] = a[i-1] + s[i] - '0';
        }

        if (a[n-1] != n - a[n-1]) {
            cout << 1 << '\n';
        } else cout << 2 << '\n';
    }

    return 0;
}