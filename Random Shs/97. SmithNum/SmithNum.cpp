#include <bits/stdc++.h>
using namespace std;

long long t, n, k, hm, p, pp, hmm, damn[1000001], prime[5000001];

void sieve() {
    fill(prime, prime + 5000001, 1);
    for (int i = 3; i * i <= 10000000; i += 2) {
        long long k = (i + 1) / 2;
        if (prime[k]) for (int j = i * i; j <= 10000000; j += 2 * i) prime[(j + 1) / 2] = 0;
    }
}

bool check(long long n) {
    if (n == 2) return 1;
    if (n < 2) return 0;
    if (n % 2 == 0) return 0;
    return prime[(n + 1) / 2];
    return 1;
}

bool acheck(long long n) {
    if (n <= 1e7) return check(n);
    else {
        long long hm = sqrt(n);
        for (int i = 2; i <= hm; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }
}

long long s(long long n) {
    long long r, hmm;

    if (n <= 1e6) if (damn[n] != -1) return damn[n];

    hmm = n;
    r = 0;

    while (n) {
        r += n % 10;
        n /= 10;
    }

    if (hmm <= 1e6) damn[hmm] = r;

    return r;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("SmithNum.inp", "r", stdin);
    freopen("SmithNum.out", "w", stdout);

    sieve();

    fill(damn, damn + 1000001, -1);

    cin >> t;
    while (t--) {
        cin >> n;

        if (acheck(n)) {
            cout << 0 << '\n';
            continue;
        }

        //cout << "checked" << '\n';

        hm = sqrt(n);
        p = s(n);
        hmm = 0;
        pp = 0;

        //vector <long long> f;
        if (n <= 9) hm = 3;
        for (int i = 2; i <= hm; i++) {
            if (n % i) continue;

            while (n % i == 0) {
                //f.push_back(i);//

                pp += s(i);
                //cout << pp << " ";
                n /= i;
            }
        }
        if (n > 1) {
            //f.push_back(n);
            pp += s(n);
        }

        //cout << '\n';
        //for (int i = 0; i < f.size(); i++) cout << f[i] << " ";
        cout << (p == pp) << '\n';// << " " << p << " " << pp << '\n' << '\n';
    }
}