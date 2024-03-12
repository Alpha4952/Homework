#include <bits/stdc++.h>
using namespace std;

long long needs, guys, total;
pair <long long, long long> milker[5001];

bool sorter (pair <long long, long long> a, pair <long long, long long> b) {
    return a.first < b.first;
}

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Milk.inp", "r", stdin);
    freopen("Milk.out", "w", stdout);
    
    cin >> needs >> guys;

    for (int i = 0; i < guys; i++) cin >> milker[i].first >> milker[i].second;
    sort(milker, milker+guys, sorter);

    for (int i = 0; i < guys; i++) {
        if (milker[i].second >= needs) {
            total += needs * milker[i].first;
            needs = 0;
            break;
        } else {
            needs -= milker[i].second;
            total += milker[i].second*milker[i].first;
        }
    }
    cout << total;
}