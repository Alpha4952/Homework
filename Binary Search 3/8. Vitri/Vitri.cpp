#include <bits/stdc++.h>
using namespace std;

long long n, k, a[100001], d[100001];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Vitri.inp", "r", stdin);
    freopen("Vitri.out", "w", stdout);

    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (i) d[i] = a[i] - a[i-1];
    }
}