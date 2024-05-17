#include <bits/stdc++.h>
using namespace std;

int n, move[100001];
stack <int> a[101], b[101], c[101], d[101];

void bktrk(int lm1, int lm2, int moves) {
    if (c->size() == n) {
        for (int i = 0; i < n; i++) {
            
        }
        return;
    }

    for (int i = 1; i < 4; i++) {
        for (int j = 1; j < 4; j++) {
            if (j == i || (j == lm1 && i == lm2)) continue;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Thap.inp", "r", stdin);
    freopen("Thap.out", "w", stdout);

    cin >> n;

    for (int i = n; i > 0; i--) {
        a->push(i);
        d->push(i);
    }

    bktrk(0, 0, 0);
}