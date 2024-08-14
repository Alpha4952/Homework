#include <bits/stdc++.h>
using namespace std;

double a, b, c, d, e, r;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Area.inp", "r", stdin);
    freopen("Area.out", "w", stdout);

    cin >> a >> b >> c;

    d = (double) (b - a) / 2;
    e = sqrt((double) c * c - d * d);
    r = (double) e / 4;

    //cout << d << " " << e << " " << r << '\n';
    cout << setprecision(2) << fixed << (double) (a + b) * e / 2 - r * r * 3.14 << endl;
    return 0;
}