#include <bits/stdc++.h>
using namespace std;

struct diem {
    int x, y, id;

    bool operator < (diem const& X) const {
        return (x < X.x) || (x == X.x && y < X.y);
    }
} a[102];

int n, x[102], dp[102], ehe[102];

int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("robot.inp", "r", stdin);
    freopen("robot.out", "w", stdout);

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].x >> a[i].y;
        a[i].id = i;
    }

    sort(a + 1, a + n + 1);
    a[0].y = -(1e9), a[n + 1].y = 1e9;
    dp[0] = 0;

    for (int i = 1; i <= n + 1; i++) {
        for (int j = 0; j < i; j++) {
            if (a[j].y < a[i].y&& dp[i] < dp[j] + 1) {
                dp[i] = dp[j] + 1;
                ehe[i] = j;
            }
        }
    }

    cout << dp[n + 1] - 1 << '\n';
    int d = 0;
    
    for (int i = n + 1; i > 0; i = ehe[i])
        x[++d] = a[ehe[i]].id;
    
    for (int i = d - 1; i > 0; i--)
        cout << x[i] << ' ';


    return 0;
}
