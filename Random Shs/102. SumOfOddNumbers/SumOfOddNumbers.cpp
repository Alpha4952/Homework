#include <bits/stdc++.h>
using namespace std;

long long n, r, t;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("SumOfOddNumbers.inp", "r", stdin);
    freopen("SumOfOddNumbers.out", "w", stdout);

    r = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;

        if (t % 2) r += t;
    }

    cout << r << endl;
    return 0;
}