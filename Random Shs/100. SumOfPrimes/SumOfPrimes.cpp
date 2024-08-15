#include <bits/stdc++.h>
using namespace std;

long long t, l, r, prime[1000001], xD[1000001];

bool check(long long n) {
    vector <long long> hmm;

    while (n) {
        hmm.push_back(n%10);
        n /= 10;
    }

    for (int i = 0; i <= hmm.size()/2; i++) {
        if (hmm[i] != hmm[hmm.size() - i - 1]) return false;
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("SumOfPrimes.inp", "r", stdin);
    freopen("SumOfPrimes.out", "w", stdout);

    fill(prime, prime + 1000001, 1);
    prime[0] = 0; prime[1] = 0;
    for (int i = 2; i <= 1000; i++) if (prime[i]) for (int j = i * i; j <= 1000000; j += i) prime[j] = 0;

    fill(xD, xD + 1000001, 0);
    for (int i = 2; i <= 1000000; i++) {
        if (prime[i]) if (check(i)) xD[i] = i;
        xD[i] += xD[i-1];
    }

    cin >> t;
    while (t--) {
        cin >> l >> r;
        cout << xD[r] - xD[l - 1] << '\n';
    }
}