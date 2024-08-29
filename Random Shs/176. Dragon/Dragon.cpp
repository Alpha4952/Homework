#include <bits/stdc++.h>
using namespace std;

long long p, n, pass, c;
pair <long long, long long> d[100001];

bool sortr (pair <long long, long long> a, pair <long long, long long> b) {
    return a.first < b.first;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Dragon.inp", "r", stdin);
    freopen("Dragon.out", "w", stdout);
    
    cin >> p >> n;
    for (int i = 0; i < n; i++) {
        cin >> d[i].first >> d[i].second;
    }

    sort(d, d + n, sortr);

    pass = 1; c = 0;
    for (int i = 0; i < n; i++) {
        if (p < d[i].first) {
            pass = 0;
            break;
        }
        c++;
        p += d[i].second;
    }

    if (pass) cout << "YES" << endl;
    else cout << "NO" << '\n' << n-c << endl;
    return 0;
}