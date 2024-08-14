#include <bits/stdc++.h>
using namespace std;

long long t, n, s[100001], hm;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Groups.inp", "r", stdin);
    freopen("Groups.out", "w", stdout);
    
    cin >> t;
    for (int _ = 0; _ < t; _++) {
        cin >> n;
        for (int i = 0; i < n; i++) cin >> s[i];

        sort(s, s + n);
        hm = 0;

        for (int i = 1; i < n; i++) if (abs(s[i] - s[i-1]) == 1) {
            cout << 2 << '\n';
            hm = 1;
            break;
        }
        if (!hm) cout << 1 << '\n';
    }
}