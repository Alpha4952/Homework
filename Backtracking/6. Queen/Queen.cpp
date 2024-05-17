#include <bits/stdc++.h>
using namespace std;

long long n, a[20], b[20];

bool diag(int i, int l) {
    for (int j = 0; j < l; j++) {
        if (a[j] + (l - j) == i || a[j] - (l - j) == i) return true;
    }

    return false;
}

void bktrk(int l) {
    if (l == n) {
        for (int i = 0; i < n; i++) cout << a[i] << " ";
        cout << '\n';
        return;
    }
    
    for (int i = 1; i <= n; i++) {
        if (b[i]) continue;

        while (diag(i, l) || b[i]) i++;

        if (i > n) return;
        a[l] = i;
        b[i] = 1;
        bktrk(l+1);
        b[i] = 0;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Queen.inp", "r", stdin);
    freopen("Queen.out", "w", stdout);
    
    cin >> n;

    bktrk(0);
}