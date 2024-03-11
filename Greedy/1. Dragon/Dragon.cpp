#include <bits/stdc++.h>
using namespace std;

long long n, s;
pair <long long, long long> p[10001];

bool sorter (pair <long long, long long> a, pair <long long, long long> b) {
    return a.first < b.first;
}

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Dragon.inp", "r", stdin);
    freopen("Dragon.out", "w", stdout);
    cin >> s >> n;

    for (int i = 0; i < n; i++) cin >> p[i].first >> p[i].second;

    sort(p, p+n, sorter);

    for (int i = 0; i < n; i++) {
        if (s > p[i].first) {
            s += p[i].second;
        } else {
            cout << "NO" << '\n' << n-i;
            return 0;
        }
    }
    cout << "YES";
}