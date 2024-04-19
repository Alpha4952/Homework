#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("Familiar.inp", "r", stdin);
    freopen("Familiar.out", "w", stdout);

    int n, a[300003], thatValue, r;

    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    a[0] = 0;
    sort(a + 1, a + n + 1);
    
    for (int i = 1; i <= n; i++) cout << a[i] << " ";
    cout << endl;

    for (int i = n; i > 0; i--) {
        if (a[i] + n - i + 1 < thatValue) break;
        thatValue = max(thatValue, a[i] + n - i + 1);
    }
    
    r = n;
    for (int i = 1; i <= n; i++) {
        cout << r << " " << a[i] << endl;
        if (a[i] + n >= thatValue) break;
        r = n - i;
    }
    cout << thatValue << " " << a[r] << " " << r << " ";

    cout << r << endl;
    return 0;
}