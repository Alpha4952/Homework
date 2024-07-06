#include <bits/stdc++.h>
using namespace std;

long long n, a[21][21], usedX[21], usedD1[121], usedD2[121], minCost;

void bktrk(long long currentCost, int line) {
    if (line > n) {
        minCost = min(minCost, currentCost);
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (usedX[i] || usedD1[i + line] || usedD2[n - i + line]) continue;

        usedX[i] = 1; usedD1[i + line] = 1; usedD2[n - i + line] = 1;
        bktrk(currentCost + a[line][i], line + 1);
        usedX[i] = 0; usedD1[i + line] = 0; usedD2[n - i + line] = 0;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("CungDien.inp", "r", stdin);
    freopen("CungDien.out", "w", stdout);

    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) cin >> a[i][j];
    }

    fill(usedX, usedX + n + 1, 0);
    fill(usedD1, usedD1 + n + 1, 0);
    fill(usedD2, usedD2 + n + 1, 0);
    minCost = 1e9;

    bktrk(0, 1);

    cout << minCost << endl;
    return 0;
}