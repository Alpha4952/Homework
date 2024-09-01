#include <bits/stdc++.h>
using namespace std;

long long t, n, a[100001], s, c;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("MaxSquare.inp", "r", stdin);
    freopen("MaxSquare.out", "w", stdout);
    
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> a[i];

        s = n;
        for (int _ = 0; _ < n; _++) {
            c = 0;
            for (int i = 1; i <= n; i++) if (a[i] >= s) c++;

            if (c >= s) {
                break;
            } else s--;
        }

        cout << s << '\n';
    }
}