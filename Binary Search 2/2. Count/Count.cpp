#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("Count.inp", "r", stdin);
    freopen("Count.out", "w", stdout);

    int n, k, a[100001], x = 0, y = 1, times = 1, num;

    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);

    num = a[1];
    for (int i = 2; i <= n; i++) {
        x = 0, y = 1;

        for (int j = i - 1; j >= 1; j--) {
            x += a[i] - a[j];

            if (x > k) break;
            
            y++;
        }

        if (y > times) {
            times = y;
            num = a[i];
        }
    }

    cout << times << " " << num << endl;
    return 0;
}