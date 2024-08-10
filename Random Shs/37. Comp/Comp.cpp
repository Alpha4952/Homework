#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("Comp.inp", "r", stdin);
    freopen("Comp.out", "w", stdout);

    cin >> n;

    if (n % 2) cout << n - 9 << " " << 9 << endl;
    else cout << n - 8 << " " << 8 << endl;
}
