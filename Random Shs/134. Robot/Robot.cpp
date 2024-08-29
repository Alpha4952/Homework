#include <bits/stdc++.h>
using namespace std;

long long t, moves[4], x, y;
string s;
char str[100001];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Robot.inp", "r", stdin);
    freopen("Robot.out", "w", stdout);
    
    cin >> t;
    while (t--) {
        cin >> str;

        map <char, int> f;
        f['L'] = 0;
        f['R'] = 0;
        f['U'] = 0;
        f['D'] = 0;

        for (int i = 0; str[i]; i++) {
            f[str[i]]++;
        }

        y = min(f['L'], f['R']);
        x = min(f['U'], f['D']);

        if (y == 0 && x) x = 1;
        if (x == 0 && y) y = 1;

        cout << 2*y + 2*x << '\n';

        cout << string(y, 'R') + string(x, 'U') + string(y, 'L') + string(x, 'D') << '\n';
    }
}