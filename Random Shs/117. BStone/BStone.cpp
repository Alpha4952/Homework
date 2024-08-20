#include <bits/stdc++.h>
using namespace std;

long long n, minv, hmm, optimus, prime;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("BStone.inp", "r", stdin);
    freopen("BStone.out", "w", stdout);
    
    cin >> n;

    minv = 1e18; optimus = sqrt(n);
    for (int i = 1; i <= optimus; i++) {
        if (n % i) continue;
        hmm = (n/i + (n % i != 0) + i)*2;
        
        minv = min(minv, hmm);
    }

    cout << minv << endl;
    return 0;
}