#include <bits/stdc++.h>
using namespace std;

long long t, n, x, temp1, temp2, strong, r;
pair <long long, long long> atk[100001];

bool sortr(pair <long long, long long> a, pair <long long, long long> b) {
    return a.first - a.second > b.first - b.second;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Hecquyn.inp", "r", stdin);
    freopen("Hecquyn.out", "w", stdout);

    cin >> t;
    for (int _ = 0; _ < t; _++) {
        cin >> n >> x;

        strong = -1;
        for (int i = 0; i < n; i++) {
            cin >> temp1 >> temp2;

            strong = max(strong, temp1);

            atk[i].first = temp1;
            atk[i].second = temp2;
        }

        sort(atk, atk + n, sortr);
        //for (int i = 0; i < n; i++) cout << atk[i].first << " " << atk[i].second << '\n';

        if (strong >= x) {
            cout << 1 << '\n';
            continue;
        }
        if (atk[0].first <= atk[0].second) {
            cout << -1 << '\n';
            continue;
        }
        
        r = (x - strong) / (atk[0].first - atk[0].second) + 1;
        if ((x - strong) % (atk[0].first - atk[0].second) > 0) r++;
        
        cout << r << '\n';
    }
}