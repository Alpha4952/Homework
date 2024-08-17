#include <bits/stdc++.h>
using namespace std;

long long t, s, d, hmm;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("MinNum.inp", "r", stdin);
    freopen("MinNum.out", "w", stdout);
    
    cin >> t;
    while (t--) {
        cin >> s >> d;
        
        if (s > d * 9) {
            cout << -1 << '\n';
            continue;
        }
        if (d == 1) {
            cout << s << '\n';
            continue;
        }

        for (int i = 1; i <= 9; i++) {
            if (s - i <= (d-1)*9) {
                cout << i;
                s -= i;
                break;
            }
        }

        for (int i = 2; i < d; i++) {
            for (int j = 0; j <= 9; j++) {
                if (s - j <= 9*(d - i)) {
                    cout << j;
                    s -= j;
                    break;
                }
            }
        }
        
        cout << s << '\n';
    }
}