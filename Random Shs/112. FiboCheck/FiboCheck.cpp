#include <bits/stdc++.h>
using namespace std;

long long t, n, f[100001], megatron;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("FiboCheck.inp", "r", stdin);
    freopen("FiboCheck.out", "w", stdout);
    
    f[0] = 0; f[1] = 1; f[2] = 1;
    for (int i = 3; i <= 90; i++) {
        f[i] = f[i-1] + f[i-2];
    }
    //for (int i = 1; i <= 90; i++) cout << f[i] << '\n';

    cin >> t;
    while (t--) {
        cin >> n;

        if (n == 0) {
            cout << -1 << '\n';
            continue;
        }

        megatron = lower_bound(f + 1, f + 91, n) - f;
        //cout << megatron << " " << f[megatron] << " " << n << '\n';
        if (f[megatron] == n) cout << megatron << '\n';
        else cout << -1 << '\n';
    }
}