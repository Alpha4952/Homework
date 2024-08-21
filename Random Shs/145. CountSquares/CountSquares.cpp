#include <bits/stdc++.h>
using namespace std;

long long t, n, a[100001], maxs, c;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("CountSquares.inp", "r", stdin);
    freopen("CountSquares.out", "w", stdout);
    
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a, a + n);

        vector <long long> lines, count(n);
        lines.push_back(a[0]); count[0] = 1; c = 1;

        for (int i = 1; i < n; i++) {
            if (a[i] != lines[lines.size() - 1]) {
                count[lines.size() - 1] = c;
                lines.push_back(a[i]);
                c = 1;
                continue;
            }
            c++;
        }
        count[lines.size() - 1] = c;

        //for (int i = 0; i < lines.size(); i++) cout << lines[i] << " " << count[i] << '\n';
        //cout << '\n';

        c = 0; maxs = 0;
        for (int i = 0; i < lines.size(); i++) {
            if (count[i] >= 4) {
                maxs = max(maxs, lines[i]*lines[i]);
            }
            c += count[i]/4;
        }

        if (c) cout << maxs << " " << c << '\n';
        else cout << -1 << '\n';
    }
}