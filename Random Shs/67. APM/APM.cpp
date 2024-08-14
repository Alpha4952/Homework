#include <bits/stdc++.h>
using namespace std;

long long n, hm;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("APM.inp", "r", stdin);
    freopen("APM.out", "w", stdout);
    
    cin >> n;

    for (int i = 30; i >= 0; i--) {
        hm = pow(2, i);
        if (hm <= n) {
            cout << i << " " << n-hm << endl;
            return 0;
        }
    }
}