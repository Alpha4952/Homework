#include <bits/stdc++.h>
using namespace std;

long long n;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("Rounding.inp", "r", stdin);
    freopen("Rounding.out", "w", stdout);
    
    cin >> n;
    
    if (n % 10 <= 5) cout << n - (n % 10) << endl;
    else cout << n + (10 - n % 10) << endl;
    
    return 0;
}
