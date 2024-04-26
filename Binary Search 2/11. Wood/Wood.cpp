#include <bits/stdc++.h>
using namespace std;

long long n, m, t[1000001], a[1000001], ma[1000001], height, h, wood;

bool sortr(long long a, long long b) {
    return a > b;
}

int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("Wood.inp", "r", stdin);
    freopen("Wood.out", "w", stdout);

    //std::clock_t tStart = clock();

    cin >> n >> m;
    for (long long i = 1; i <= n; i++) cin >> t[i];
    sort(t + 1, t + n + 1);
    //for (long long i = 1; i <= n; i++) cout << t[i] << " ";
    //cout << endl;

    a[0] = 0;
    for (long long i = 1; i <= n; i++) a[i] = a[i - 1] + t[i];
    for (long long i = n; i >= 1; i--) ma[i] = (a[n] - a[i - 1]) - t[i] * (n - i + 1);
    //for (long long i = 1; i <= n; i++) cout << ma[i] << " ";
    //cout << endl;
    //sort(ma + 1, ma + n + 1);

    h = lower_bound(ma + 1, ma + n + 1, m, sortr) - ma - 1;
    height = t[h];
    wood = ma[h];

    //cout << h << " " << ma[h] << endl;

    while (height <= t[h + 1]) {
        if (wood == m) break;
        else if (wood < m) {
            height--;
            break;
        } else {
            wood -= n-h;
            height++;
        }
    }

    cout << height << endl;
    //std::prlong longf("Time taken: %.2fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
    return 0;
}