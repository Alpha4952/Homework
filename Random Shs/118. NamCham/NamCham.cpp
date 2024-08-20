#include <bits/stdc++.h>
using namespace std;

long long n, ohsh;
string optimus, prime;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("NamCham.inp", "r", stdin);
    freopen("NamCham.out", "w", stdout);

    cin >> n;
    cin >> optimus;

    ohsh = n;

    for (int i = 1; i < ohsh; i++) {
        cin >> prime;

        if (prime[0] != optimus[optimus.length() - 1]) {
            n--;
        }

        optimus = prime;
    }

    cout << n << endl;
    return 0;
}