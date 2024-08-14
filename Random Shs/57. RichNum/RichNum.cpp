#include <bits/stdc++.h>
using namespace std;

long long t, n;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    std::freopen("RichNum.inp", "r", stdin);
    std::freopen("RichNum.out", "w", stdout);

    t = 1;
    
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (i != n / i) t = t + i + n / i;
            else t = t + i;
        }
    }
    
    if (t > n) cout << 1;
    else cout << 0;
}