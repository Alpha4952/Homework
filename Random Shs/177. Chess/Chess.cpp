#include <bits/stdc++.h>
using namespace std;

long long n, a[100001], b[100001], p, ia, ib;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Chess.inp", "r", stdin);
    freopen("Chess.out", "w", stdout);
    
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
    //for (int i = 0; i < n; i++) cin >> b[i];

    sort(a, a + n);
    sort(b, b + n);

    p = 0; ia = n-1; ib = n-1;
    while (a[ia] > b[ib]) {
        ia--;
        if (ia < 0) break;
    }
    while (ia >= 0 && ib >= 0) {
        if (a[ia] < b[ib]) {
            p += 2;
        } else if (a[ia] == b[ib]) {
            p++;
        }
        ia--; ib--;
    }

    cout << p << endl;
}