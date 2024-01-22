#include <bits/stdc++.h>
using namespace std;

long long n, a[100001], r;
string s;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("HOUSE.inp", "r", stdin);
    freopen("HOUSE.out", "w", stdout);
    
    cin >> n >> s;
    a[0] = 1;

    for (int i = 1; i < n; i++) {
        if (s[i] == s[i-1]) a[i] = a[i-1] + 1;
        else a[i] = 1;
    }

    r = 0;
    for (int i = 1; i < n; i++) if (a[i] > a[i+1] || i == n-1) r += floor(a[i]/2);
    cout << r;
}