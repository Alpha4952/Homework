#include <bits/stdc++.h>
using namespace std;

int r, coins;
pair <int, int> ravens[1001];

bool sorter (pair <int, int> a, pair <int, int> b) {
    return (a.second - a.first) < (b.second - b.second);
}

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Coins.inp", "r", stdin);
    freopen("Coins.out", "w", stdout);
    
    cin >> r >> coins;
    for (int i = 0; i < r; i++) cin >> ravens[i].first;
    for (int i = 0; i < r; i++) cin >> ravens[i].second;
    sort(ravens, ravens+r, sorter);

    for (int i = 0; i < r; i++) {
        if (coins < ravens[i].second - ravens[i].first) {
            cout << coins;
            return 0;
        }

        coins += ravens[i].first;
    }
    cout << coins;
}