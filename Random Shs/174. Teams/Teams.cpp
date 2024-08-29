#include <bits/stdc++.h>
using namespace std;

long long n, c[4], t;
vector <long long> t1, t2, t3;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Teams.inp", "r", stdin);
    freopen("Teams.out", "w", stdout);

    fill(c, c + 4, 0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        c[t]++;

        if (t == 1) {
            t1.push_back(i + 1);
        } else if (t == 2) {
            t2.push_back(i + 1);
        } else if (t == 3) {
            t3.push_back(i + 1);
        }
    }

    t = min(c[1], min(c[2], c[3]));
    cout << t << '\n';
    for (int i = 0; i < t; i++) {
        cout << t1[i] << " " << t2[i] << " " << t3[i] << '\n';
    }
}