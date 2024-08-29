#include <bits/stdc++.h>
using namespace std;

long long t, n, prime[1000001], a[100001], maxl, cl, ps, cps;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("LISMaxSumPrime.inp", "r", stdin);
    freopen("LISMaxSumPrime.out", "w", stdout);

    fill(prime, prime + 1000001, 1);
    prime[0] = 0; prime[1] = 0;
    for (int i = 2; i <= 1000; i++) {
        if (prime[i]) for (int j = i * i; j <= 1000000; j += i) {
            prime[j] = 0;
        }
    }

    cin >> t;
    while (t--) {
        cin >> n;

        maxl = 0; ps = 0;

        if (n) {
            cin >> a[0];
            cl = 1;
            if (prime[a[0]]) cps = a[0];
        }

        for (int i = 1; i < n; i++) {
            cin >> a[i];
            if (a[i] <= a[i - 1]) {
                if (cl >= maxl) {
                    maxl = cl;
                    cl = 0;
                    ps = max(ps, cps);
                    if (prime[a[i]]) cps = a[i];
                    else cps = 0;
                }
                //cout << i << '\n';
                continue;
            }

            cl++;
            if (prime[a[i]]) cps += a[i];
        }

        maxl = max(maxl, cl);
        ps = max(ps, cps);

        cout << maxl << " " << ps << '\n';
    }
}