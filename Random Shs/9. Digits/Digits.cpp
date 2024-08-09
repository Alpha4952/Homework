#include <bits/stdc++.h>
using namespace std;

long long t, n, sum[1000];

long long gidit(long long n) {
    long long r = 0;

    while (n) {
        r += n%10;
        n /= 10;
    }

    return r;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Digits.inp", "r", stdin);
    freopen("Digits.out", "w", stdout);

    for (int i = 0; i <= 999; i++) {
        sum[i] = gidit(i);
        while (sum[i] > 9) sum[i] = gidit(sum[i]);
    }
    
    //for (int i = 1; i <= 100; i++) cout << i << " " << sum[i] << '\n';

    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;

        if (n % 9) cout << n % 9 << '\n';
        else cout << 9 << '\n';
    }

    return 0;
}