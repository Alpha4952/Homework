#include <bits/stdc++.h>
using namespace std;

long long t, n, uoTime;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Water.inp", "r", stdin);
    freopen("Water.out", "w", stdout);
    
    cin >> t;
    while (t) {
        t--;

        long long l[2001], r[2001];
        
        cin >> n;
        for (int i = 0; i < n; i++) cin >> l[i] >> r[i];

        uoTime = 0;
        for (int i = 0; i < n; i++) {
            if (r[i] >= uoTime) {
                cout << max(uoTime, l[i]) << " ";
                uoTime = max(uoTime, l[i]) + 1;
            } else {
                cout << 0 << " ";
            }
        }
        cout << '\n';
    }

    return 0;
}