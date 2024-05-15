#include <bits/stdc++.h>
using namespace std;

int n, a[21];

void bktrk (int k) {
    if (k == n) {
        for (int i = 0; i < k; i++) cout << a[i];
        cout << '\n';
        return;
    }

    for (int i = 0; i < 2; i++) {
        a[k] = i;
        bktrk(k+1);
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("NhiPhan.inp", "r", stdin);
    freopen("NhiPhan.out", "w", stdout);
    
    cin >> n;

    bktrk(0);
    return 0;
}