#include <bits/stdc++.h>
using namespace std;

long long n, i, j;
pair <long long, long long> a[100001];

bool sortr(pair <long long, long long> a, pair <long long, long long> b) {
    return a.second < b.second;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Sum0.inp", "r", stdin);
    freopen("Sum0.out", "w", stdout);
    
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].second;
        a[i].first = i;
    }

    sort(a + 1, a + n + 1, sortr);

    j = n;
    for (int i = 1; i < j; i++) {
        while (a[i].second + a[j].second > 0) {
            j--;
        }
        if (a[i].second + a[j].second < 0) continue;

        if (i == j) continue;
        cout << a[i].first << " " << a[j].first << endl;
        return 0;
    }

    cout << -1 << " " << -1 << endl;
    return 0;
}