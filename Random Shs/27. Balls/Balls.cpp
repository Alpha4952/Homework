#include <bits/stdc++.h>
using namespace std;

long long a, b, x, y, z, v, s, t;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("Balls.inp", "r", stdin);
    freopen("Balls.out", "w", stdout);

    cin >> a >> b >> x >> y >> z;

    v = x * 2 + y;
    s = y + z * 3;

    t = 0;
    if (v > a) t += v - a;
    if (s > b) t += s - b;

    cout << t << endl;
    return 0;
}
