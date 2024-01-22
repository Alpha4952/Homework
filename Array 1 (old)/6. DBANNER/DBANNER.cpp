#include <bits/stdc++.h>
using namespace std;

long long n, a[100001], s[100001], maxs;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("DBANNER.inp", "r", stdin);
    freopen("DBANNER.out", "w", stdout);
    
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    fill(s, s+n, 0);
    maxs = 0;

    for (int i = 0; i < n; i++) {
        int j = 0;
        while (j <= i) {
            if (a[j] < a[i]) s[i] = 0;
            else s[i] += a[i];
            j++;
            maxs = max(maxs, s[i]);
        }
    }
    cout << maxs; 
}