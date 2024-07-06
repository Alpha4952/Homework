#include <bits/stdc++.h>
using namespace std;

long long n, a[12][12], usedX[12], maxvalue;

void lmao(int line, int current) {
    if (line > n) {
        if (current > maxvalue) {
            maxvalue = current;
        }
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (usedX[i]) continue;

        usedX[i] = 1;
        lmao(line + 1, current + a[line][i]);
        usedX[i] = 0;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Games.inp", "r", stdin);
    freopen("Games.out", "w", stdout);
    
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) cin >> a[i][j];
    }
    fill(usedX, usedX + n + 1, 0);

    maxvalue = -1e6;
    lmao(1, 0);

    cout << maxvalue << '\n';
    return 0;
}