#include <bits/stdc++.h>
using namespace std;

int n;

void bktrk (int m, string c1, string c2, string c3) {
    if (m == 1) cout << c1 << "→" << c3 << '\n';
    else {
        bktrk(m-1, c1, c2, c3);
        bktrk(1, c1, c3, c2);
        bktrk(m-1, c2, c3, c1);
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Thap.inp", "r", stdin);
    freopen("Thap.out", "w", stdout);

    cin >> n;

    bktrk(n, "A", "B", "C");
    return 0;
}