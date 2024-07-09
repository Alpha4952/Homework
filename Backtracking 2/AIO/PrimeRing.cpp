#include <bits/stdc++.h>
using namespace std;

long long n, prime[901], ring[100001], used[100];

bool check(int iterator) {
    if (iterator == n) {
        return (prime[ring[iterator] + 1] && prime[ring[iterator] + ring[iterator - 1]]);
    }
    return prime[ring[iterator] + ring[iterator - 1]];
}

void generate(int current) {
    if (current == n) {
        for (int i = 1; i <= n; i++) cout << ring[i] << " ";
        cout << '\n';
        return;
    }

    for (int i = 2; i <= n; i++) {
        if (used[i]) continue;
        ring[current + 1] = i;
        if (check(current + 1)) {
            used[i] = 1;
            generate(current + 1);
            used[i] = 0;
        } else continue;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("PrimeRing.inp", "r", stdin);
    freopen("PrimeRing.out", "w", stdout);

    fill(prime, prime + 901, 1);
    fill(used, used + n + 1, 0);
    prime[0] = 0; prime[1] = 0;
    for (int i = 2; i <= 30; i++) if (prime[i]) for (int j = i * i; j <= 900; j += i) prime[j] = 0;

    ring[1] = 1;
    while (cin >> n) {
        generate(1);
        cout << '\n';
    }
    return 0;
}