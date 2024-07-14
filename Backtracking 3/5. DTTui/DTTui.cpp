#include <bits/stdc++.h>
using std::cin;
using std::cout;

long long n, m, ws[51], vs[51], maxv;

void wat(int iterator, long long w, long long v) {
    if (iterator == n + 1) {
        maxv = std::max(maxv, v);
        return;
    }

    if (w + ws[iterator + 1] <= m) wat(iterator + 1, w + ws[iterator + 1], v + vs[iterator + 1]);
    wat(iterator + 1, w, v);
}

void wat1(int iterator, long long w, long long v) {
    if (iterator == n + 1) {
        maxv = std::max(maxv, v);
        return;
    }

    for (int i = iterator + 1; i <= n; i++) {
        
    }
}

int main() {
    std::ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("DTTui.inp", "r", stdin);
    freopen("DTTui.out", "w", stdout);

    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> ws[i] >> vs[i];
    }

    maxv = 0;
    wat(0, 0, 0);

    cout << maxv << std::endl;
    return 0;
}