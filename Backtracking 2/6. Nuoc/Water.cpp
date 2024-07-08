#include <bits/stdc++.h>
using namespace std;

long long n, v, cans[100001];
vector <long long> use, temp;
vector <vector <long long> > uses;

void bktrk (long long currentWater, long long i, long long numberOfUses) {
    if (currentWater == v) {
        uses.push_back(temp);
        for (int j = 0; j < numberOfUses; j++) uses[uses.size() - 1].push_back(use[j]);
        return;
    }
    for (int j = i + 1; j <= n; j++) {
        if (currentWater + cans[j] <= v) {
            if (use.size() <= numberOfUses + 1) use.push_back(j);
            else use[numberOfUses] = j;
            if (use.size() > numberOfUses + 1) {
                use[numberOfUses + 1] = j;
            } else {
                use.push_back(j);
            }
            
            bktrk(currentWater + cans[j], j, numberOfUses + 1);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Water.inp", "r", stdin);
    freopen("Water.out", "w", stdout);
    
    cin >> n >> v;
    for (int i = 1; i <= n; i++) {
        cin >> cans[i];
    }

    bktrk(0, 0, 0);

    if (uses.size()) {
        cout << uses.size() << '\n';
        for (int i = 0; i < uses.size(); i++) {
            for (int j = 0; j < uses[i].size(); j++) {
                cout << uses[i][j] << " ";
            }
            cout << '\n';
        }
    } else cout << -1 << '\n';
}