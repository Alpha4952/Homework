#include <bits/stdc++.h>
using namespace std;

long long t, a, b, prime[2000001];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("FindNum.inp", "r", stdin);
    freopen("FindNum.out", "w", stdout);

    fill(prime, prime + 2000001, 1);
    prime[0] = 0; prime[1] = 0;
    for (int i = 2; i * i < 2000001; i++) if (prime[i]) for (int j = i * i; j < 2000001; j += i) prime[j] = 0;
    for (int i = 1; i <= 2000001; i++) {
        prime[i] += prime[i - 1];
    }

    cin >> t;
    while (t--) {
        cin >> a >> b;

        cout << lower_bound(prime + a + b, prime + 2000001, prime[a + b] + 1) - prime - (a + b) << '\n';
    }
}