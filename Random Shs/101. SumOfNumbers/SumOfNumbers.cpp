#include <bits/stdc++.h>
using namespace std;

long long n, r, t;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("SumOfNumbers.inp", "r", stdin);
    freopen("SumOfNumbers.out", "w", stdout);
    
    r = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;

        r += t;
    }

    cout << r << endl;
    return 0;
}