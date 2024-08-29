#include <bits/stdc++.h>
using namespace std;

long long t, n, k, mindiff, ex1, ex2, ex;
double avg;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("MinDiff.inp", "r", stdin);
    freopen("MinDiff.out", "w", stdout);

    cin >> t;
    while (t--) {
        cin >> n >> k;
        vector <long long> a(n);

        avg = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            avg += a[i];
        }

        avg /= n; ex = 0;

        ex1 = -1e18; ex2 = 1e18;
        for (int i = 0; i < n; i++) {
            if (a[i] < avg) a[i] += k;
            else if (a[i] > avg) a[i] -= k;
            else {
                ex1 = a[i] + k;
                ex2 = a[i] - k;
                a.erase(a.begin() + i, a.begin() + i + 1);
                ex = 1;
            }
        }

        //for (int i = 0; i < a.size(); i++) cout << a[i] << " ";
        //cout << '\n';

        sort(a.begin(), a.end());

        mindiff = 1e18;
        if (ex) {
            if (ex1 > a[0] && ex1 > a[a.size() - 1]) {
                mindiff = min(mindiff, ex1 - a[0]);
            }
            if (ex2 < a[0] && ex1 < a[a.size() - 1]) {
                mindiff = min(mindiff, a[a.size() - 1] - ex2);
            }
        } else mindiff = a[a.size() - 1] - a[0];

        cout << mindiff << '\n';// << " " << n << " " << k << " " << avg << '\n';
    }
}