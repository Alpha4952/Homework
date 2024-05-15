#include <bits/stdc++.h>
using namespace std;

long long n, k, a[11], b[11];

void bktrk (int l) {
    if (l == k) {
        for (int i = 0; i < k; i++) cout << a[i] << " ";
        cout << '\n';
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (b[i]) continue;

        b[i] = 1;
        a[l] = i;

        bktrk(l+1);
        b[i] = 0;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("ChinhHop.inp", "r", stdin);
    freopen("ChinhHop.out", "w", stdout);
    
    cin >> n >> k;

    bktrk(0);
}