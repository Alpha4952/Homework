#include <bits/stdc++.h>
using namespace std;

long long n, a[1000001], f[1000001], trace[1000001], cmin, cmax;
float e, t;
vector <long long> eh;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("CluPart.inp", "r", stdin);
    freopen("CluPart.out", "w", stdout);

    cin >> n >> e;

    for (int i = 1; i <= n; i++) cin >> a[i];

    for (int i = 1; i <= n; i++) {
        f[i] = 1e9;
        cmin = a[i]; cmax = a[i];

        for (int j = i; j >= 1; j--) {
            cmin = min(cmin, a[j]);
            cmax = max(cmax, a[j]);

            t = float(i - j + 1) / (cmax - cmin + 1);

            if (t >= e) {
                if (f[i] > f[j - 1] + 1) {
                    f[i] = f[j - 1] + 1;
                    trace[i] = j - 1;
                }
            }
        }
    }

    cout << f[n] << '\n';

    int i = n;
    while (i >= 1) {
        eh.push_back(i);
        i = trace[i];
    }
    for (int i = eh.size() - 1; i > 0; i--) cout << eh[i] << " ";

    return 0;
}

