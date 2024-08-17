#include <bits/stdc++.h>
using namespace std;

long long t, n, a[100001], c, hmmmm;
string r;
vector <long long> n1, n2;

bool inc(long long a, long long b) {
    return a > b;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("MakeNum.inp", "r", stdin);
    freopen("MakeNum.out", "w", stdout);

    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            if (a[i] == 0) {
                n--;
                i--;
            }
        }

        sort(a + 1, a + n + 1, inc);

        r = ""; c = 0;
        for (int i = 1; i < n; i += 2) {
            //cout << i << " " << a[i] + a[i + 1] + c << '\n';
            if (a[i] + a[i + 1] + c <= 9) {
                r += char(a[i] + a[i + 1] + c + '0');
                c = 0;
            } else {
                r += char((a[i] + a[i + 1] + c - 10) + '0');
                c = 1;
            }
            //cout << r << '\n';
        }

        if (n % 2) {
            if (n % 2) r += char(a[n] + c + '0');
        } else if (c) {
            r += "1";
        }

        hmmmm = 1;
        for (int i = r.length() - 1; i >= 0; i--) {
            hmmmm = 0;
            cout << r[i];
        }
        if (hmmmm) cout << 0;
        cout << '\n';
    }
}