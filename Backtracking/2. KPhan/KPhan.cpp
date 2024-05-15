#include <bits/stdc++.h>
using namespace std;

long long n, k, a[11];

void bktrk (int l) {
    if (l == n) {
        for (int i = 0; i < n; i++) cout << a[i];
        cout << '\n';
        return;
    }

    for (int i = 0; i < k; i++) {
        a[l] = i;
        bktrk(l+1);
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("KPhan.inp", "r", stdin);
    freopen("KPhan.out", "w", stdout);
    
    cin >> n >> k;

    bktrk(0);
    return 0;
}