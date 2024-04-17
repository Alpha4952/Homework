#include <bits/stdc++.h>
using namespace std;

bool sortr (long long a, long long b) {
    return a > b;
}

int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("Jump.inp", "r", stdin);
    freopen("Jump.out", "w", stdout);

    long long n, p, a[100001], r, smol[100001], temporaryValue;

    cin >> n >> p;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i) smol[i] = min(smol[i-1], a[i]);
        else smol[i] = a[i];
    }

    for (long long i = 1; i < n; i++) {
        temporaryValue = (lower_bound(smol, smol+i-1, a[i] - p, sortr) - smol);
        if (a[i] - a[temporaryValue] >= p) r = max(r, i - temporaryValue);
    }
    cout << r << endl;
    return 0;
}