#include <bits/stdc++.h>
using namespace std;

long long x, y;
int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("Copy.inp", "r", stdin);
    freopen("Copy.out", "w", stdout);

    cin >> x >> y;

    if (y == 0) cout << "No";
    else if (y == 1) {
        if (x == 0) cout << "Yes";
        else cout << "No";
    } else {
        if (x - y + 1 < 0) cout << "No";
        else if ((x - y + 1) % 2) cout << "No";
        else cout << "Yes";
    }

    cout << endl;
    return 0;
}
