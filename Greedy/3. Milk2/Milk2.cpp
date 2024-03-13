#include <bits/stdc++.h>
using namespace std;

long long n, m, a[100001];

bool sorter (long long a, long long b) {
    return a > b;
}

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Milk2.inp", "r", stdin);
    freopen("Milk2.out", "w", stdout);
    
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n, sorter);

    for (int i = 0; i < n; i++) {
        if (a[i] - i <= 0) break;
        m += a[i]-i;
    }

    cout << m;
}