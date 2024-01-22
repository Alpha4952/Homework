#include <bits/stdc++.h>
using namespace std;

int n, a[1000001], s, oddc, evenc, r;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("DDELETE.inp", "r", stdin);
    freopen("DDELETE.out", "w", stdout);
    cin >> n; s = 0; oddc = 0;

    for (long long i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
        if (a[i] % 2) oddc++;
    }
    evenc = n-oddc;

    if (s%2) r = oddc*evenc;
    else r = oddc*(oddc-1)/2 + evenc*(evenc-1)/2;

    cout << r;
}