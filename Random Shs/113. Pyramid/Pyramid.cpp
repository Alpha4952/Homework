#include <bits/stdc++.h>
using namespace std;

long long n, hmm, total;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Pyramid.inp", "r", stdin);
    freopen("Pyramid.out", "w", stdout);

    cin >> n;

    hmm = 0;total = 0;
    for (int i = 1; i <= 1000000000; i++) {
        hmm += i;
        total += hmm;
        //cout << hmm << '\n';
        if (total == n) {
            cout << i << endl;
            return 0;
        } else if (total > n) {
            cout << i - 1 << endl;
            return 0;
        }
    }

    return 0;
}