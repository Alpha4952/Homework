#include <bits/stdc++.h>
using namespace std;

long long p, b[100001], w[100001], temp, c, cb, cw, k;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("BWPoints.inp", "r", stdin);
    freopen("BWPoints.out", "w", stdout);
    
    cin >> p;
    for (int i = 0; i < p; i++) cin >> b[i];
    for (int i = 0; i < p; i++) cin >> w[i];
    sort(b, b+p);
    sort(w, w+p);

    c = -1000000001;
    while (cb < p && cw < p) {
        if (b[cb] <= c) cb++;
        else if (w[cw] <= c) cw++;
        else {
            k++;
            c = max(b[cb], w[cw]);
        }
    }
    cout << k;
}