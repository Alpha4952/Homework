#include <bits/stdc++.h> 
using namespace std;

int n, p, l, r, t, leftv, rightv;

int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("Browser.inp", "r", stdin);
    freopen("Browser.out", "w", stdout);

    cin >> n >> p >> l >> r;

    if (l == 1 && r == n) cout << 0;
    else if (l == 1) cout << abs(r - p) + 1;
    else if (r == n) cout << abs(p - l) + 1;
    else cout << min(abs(r - p), abs(l - p)) + 2 + (r - l);
    return 0;
}
