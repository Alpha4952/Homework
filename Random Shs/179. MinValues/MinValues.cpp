#include <bits/stdc++.h>
using namespace std;

long long n, k, a[100001];

long long minv(long long start, long long end) {
    long long r = 1e18;
    for (int i = start; i <= end; i++) {
        r = min(r, a[i]);
    }

    return r;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("MinValues.inp", "r", stdin);
    freopen("MinValues.out", "w", stdout);
    
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = k-1; i < n; i++) {
        cout << minv(i - k + 1, i) << '\n';
    }
}