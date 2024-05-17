#include <bits/stdc++.h>
using namespace std;

long long n, a[100001];

void bktrk(int m, int l, int last) {
    if (m == 0) {
        cout << n << "=";
        for (int i = 0; i < l-1; i++) cout << a[i] << "+";
        cout << a[l-1] << '\n';
        
        return;
    } else if (m < 0) return;

    for (int i = last; i <= m; i++) {
        a[l] = i;

        bktrk(m-i, l+1, i);
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("PhanTich.inp", "r", stdin);
    freopen("PhanTich.out", "w", stdout);
    
    cin >> n;

    bktrk(n, 0, 1);
}