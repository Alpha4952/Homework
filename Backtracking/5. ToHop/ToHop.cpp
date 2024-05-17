#include <bits/stdc++.h>
using namespace std;

int n, k, a[11], b[11];

void bktrk(int l) {
    if (l == k) {
        for (int i = 1; i <= k; i++) cout << a[i] << " ";
        cout << '\n';
        return;
    }

    for (int i = a[l] + 1; i <= n; i++) {
        a[l+1] = i;

        bktrk(l+1);
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("ToHop.inp", "r", stdin);
    freopen("ToHop.out", "w", stdout);
    
    cin >> n >> k;

    a[0] = 0;
    bktrk(0);
    return 0;
}