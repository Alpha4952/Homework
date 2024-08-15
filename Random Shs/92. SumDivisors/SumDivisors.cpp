#include <bits/stdc++.h>
using namespace std;

long long t, n, r, hmm, storage[10001];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("SumDivisors.inp", "r", stdin);
    freopen("SumDivisors.out", "w", stdout);

    for (int i = 1; i <= 10000; i++) {
        hmm = sqrt(i);
        r = 0;
        for (int j = 1; j <= hmm; j++) {
            if (i % j) continue;

            r += j;
            if (i/j != j) r += i/j;
        }

        storage[i] = r;
    }
    storage[0] = 0;

    cin >> t;
    while (t--) {
        cin >> n;

        r = 0; hmm = sqrt(n);
        for (int i = 1; i <= hmm; i++) {
            if (n % i) continue;

            r += storage[i];
            if (n/i != i) r += storage[n/i];
        }

        cout << r << '\n';
    }
}