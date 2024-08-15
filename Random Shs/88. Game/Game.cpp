#include <bits/stdc++.h>
using namespace std;

long long t, n, type[4], p0, p1, p2, p;
string name[5];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Game.inp", "r", stdin);
    freopen("Game.out", "w", stdout);

    type[1] = 4;
    type[3] = 3;
    type[2] = 2;
    type[0] = 1;

    name[4] = "A";
    name[3] = "B";
    name[2] = "C";
    name[1] = "D";

    cin >> t;
    while (t--) {
        cin >> n;

        p0 = type[n % 4]; p1 = type[(n + 1) % 4]; p2 = type[(n + 2) % 4];

        if (p0 > p1 && p0 > p2) {
            cout << 0 << " " << name[p0] << '\n';
        }
        if (p1 > p0 && p1 > p2) {
            cout << 1 << " " << name[p1] << '\n';
        }
        if (p2 > p0 && p2 > p1) {
            cout << 2 << " " << name[p2] << '\n';
        }
    }

    return 0;
}