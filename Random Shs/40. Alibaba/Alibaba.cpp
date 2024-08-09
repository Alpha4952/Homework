#include <bits/stdc++.h>
using namespace std;

long long n, a[100005], r;

int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("Alibaba.inp", "r", stdin);
    freopen("Alibaba.out", "w", stdout);

    r = 0;

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        r += a[i];
    }
    
    if (r % 2 == 0) cout << r;
    else {
        sort(a + 1, a + n + 1);
        for (int i = 1; i <= n; i++) {
            if (a[i] % 2 == 1) {
                r -= a[i];
                break;
            }
        }
        if (r % 2 == 0) cout << r;
        else cout << 0;
    }
    return 0;
}
