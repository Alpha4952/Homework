#include <bits/stdc++.h>
using namespace std;

long long n, a[11], b[11];

void bktrk(int l) {
    if (l == n) {
        for (int i = 0; i < n; i++) cout << a[i] << " ";
        cout << '\n';
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (b[i]) continue;

        a[l] = i;
        b[i] = 1;

        bktrk(l+1);

        b[i] = 0;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("HoanVi.inp", "r", stdin);
    freopen("HoanVi.out", "w", stdout);
    
    cin >> n;

    fill(b, b+11, 0);

    bktrk(0);
}