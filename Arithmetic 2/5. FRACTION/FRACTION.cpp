#include<bits/stdc++.h>
using namespace std;

long long n, b, r = 0;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("FRACTION.inp", "r", stdin);
    freopen("FRACTION.out", "w", stdout);

    cin >> b >> n;

    for (int m = 1; m <= 2*n; m++) if (b*m*(2*n-m) % (n*n) == 0 && m != n) r++;
    cout << r;
}