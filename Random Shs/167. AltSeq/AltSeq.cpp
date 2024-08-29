#include <bits/stdc++.h>
using namespace std;

long long t, n, a[100001];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("AltSeq.inp", "r", stdin);
    freopen("AltSeq.out", "w", stdout);

    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a, a + n);

        for (int i = 0; i < n / 2; i++) {
            cout << a[n-i-1] << " " << a[i] << " ";
        }

        if (n % 2) cout << a[n / 2] << " ";
        cout << '\n';
    }
}