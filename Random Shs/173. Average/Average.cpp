#include <bits/stdc++.h>
using namespace std;

long long n, a[1000001], maxv, maxc, c;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Average.inp", "r", stdin);
    freopen("Average.out", "w", stdout);
    
    maxv = -1e18;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        maxv = max(maxv, a[i]);
    }

    c = 0; maxc = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] == maxv) {
            c = 1;
            for (int j = i + 1; j < n; j++) {
                if (a[j] != maxv) {
                    i = j-1;
                    maxc = max(maxc, c);
                    break;
                }

                c++;
                if (j == n - 1) {
                    i = j;
                    maxc = max(maxc, c);
                    break;
                }
            }
        }
    }

    cout << maxc << endl;
}