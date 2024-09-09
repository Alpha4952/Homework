#include <bits/stdc++.h>
using namespace std;

long long n, c, maxPos, a[1000001], b[1000001], pos[1000001];

int main() {
    freopen("tunnel.inp", "r", stdin);
    freopen("tunnel.out", "w", stdout);

    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) {
        cin >> b[i];
        pos[b[i]] = i;
    }

    c = 0; maxPos = -1;

    for (int i = 0; i < n; i++) {
        if (pos[a[i]] < maxPos)
            c++;
        else maxPos = pos[a[i]];
    }
    cout << c << endl;
    return 0;
}
