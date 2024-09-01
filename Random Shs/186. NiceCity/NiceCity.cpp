#include <bits/stdc++.h>
using namespace std;

long long n, a[300003], maxd;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("NiceCity.inp", "r", stdin);
    freopen("NiceCity.out", "w", stdout);
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    maxd = 0;
    for (long long i = 0; i < n-1; i++) {
        if (n-1 - i < maxd) break;
        for (long long j = n-1; j > i; j--) {
            if (j-i < maxd) break;
            if (a[i] != a[j]) {
                maxd = max(maxd, j-i);
                break;
            }
        }
    }

    cout << maxd << endl;
    return 0;
}