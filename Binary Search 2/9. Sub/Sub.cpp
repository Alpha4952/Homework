#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("Sub.inp", "r", stdin);
    freopen("Sub.out", "w", stdout);

    int n, s, a[100001], r = 1e9, temp;
    a[0] = 0;

    cin >> n >> s;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    a[n + 1] = 2e9;
    a[n + 2] = 2e9;

    for (int i = 1; i <= n; i++) cout << a[i] << " ";
    cout << endl;

    for (int i = 1; i <= n; i++) {
        if (a[n] < s) r = -1;
        temp = (int) (lower_bound(a + i - 1, a + n + 1, s + a[i - 1]) - a) - i + 1;
        if (i + temp - 1 > n) temp = r;
        cout << i << " " << temp << " " << temp + i - 1 << " " << a[i] << endl;
        r = min(r, temp);
    }
    cout << r << endl;
    return 0;
}