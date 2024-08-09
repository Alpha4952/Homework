#include <bits/stdc++.h>
using namespace std;

long long t, n, type;
vector <long long> eh;

void bktrk(long long n, long long origin) {
    if (n == 1) {
        if (eh[origin] == 0) eh[origin] = 1;
        else eh[origin] = 3;
    } else if (n == 2) {
        if (eh[origin] == 0) eh[origin] = 2;
        else eh[origin] = 3;
    } else {
        for (int i = 1; i < n; i++) {
            if (n % i) continue;
            bktrk(n - i, origin);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("TomJerry.inp", "r", stdin);
    freopen("TomJerry.out", "w", stdout);

    cin >> t;
    eh.push_back(0);

    for (int _ = 0; _ < t; _++) {
        cin >> n;
        if (n == 1) cout << 0 << '\n';
        else if (n == 2) cout << 1 << '\n';
        else if (n % 2) cout << 0 << '\n';
        else cout << 1 << '\n';
    }

    return 0;
}