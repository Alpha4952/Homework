#include <bits/stdc++.h>
using namespace std;

long long t, n, p[100001], hmm[100001];
vector <long long> primes;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("PrimeFactors.inp", "r", stdin);
    freopen("PrimeFactors.out", "w", stdout);

    fill(p, p + 100001, 1);
    p[0] = 0; p[1] = 0;
    for (int i = 2; i * i <= 100000; i++) {
        if (p[i]) {
            for (int j = i * i; j <= 100000; j += i) p[j] = 0;
        }
    }
    for (int i = 2; i <= 100000; i++) if (p[i]) primes.push_back(i);

    cin >> t;
    while (t--) {
        cin >> n;

        fill(hmm, hmm + 100001, 0);
        for (int i = 0; i < primes.size(); i++) {
            if (n % primes[i]) continue;

            while (n % primes[i] == 0) {
                hmm[primes[i]]++;
                n /= primes[i];
            }
        }
        hmm[n]++;

        for (int i = 2; i <= 100000; i++) {
            if (hmm[i]) cout << i << " " << hmm[i] << " ";
        }
        cout << '\n';
    }
}