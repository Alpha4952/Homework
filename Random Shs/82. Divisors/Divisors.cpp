#include <bits/stdc++.h>
using namespace std;

long long t, n, a[100001], c;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Divisors.inp", "r", stdin);
    freopen("Divisors.out", "w", stdout);

    cin >> t;
    while (t--) {
        cin >> n;
        vector <long long> divisors;

        c = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 1; i <= sqrt(a[0]); i++) {
            if (a[0] % i) continue;
            divisors.push_back(i);
            if (i != a[0] / i) divisors.push_back(a[0] / i);
        }

        sort(divisors.begin(), divisors.end());

        //for (int i = 0; i < divisors.size(); i++) cout << divisors[i] << " ";
        //cout << '\n';

        for (int j = 1; j < n; j++) {
            for (int i = 0; i < divisors.size(); i++) {
                if (a[j] % divisors[i]) divisors.erase(divisors.begin() + i);
            }
        }

        cout << divisors.size() << '\n';
    }
}