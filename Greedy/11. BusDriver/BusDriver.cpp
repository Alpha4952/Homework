#include <bits/stdc++.h>
using namespace std;

long long n, d, r, ot, day[101], night[101], wtime[101];

bool sorter (long long a, long long b) {
    return a > b;
}

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("BusDriver.inp", "r", stdin);
    freopen("BusDriver.out", "w", stdout);
    
    while (1) {
        cin >> n >> d >> r;
        ot = 0;
        if (n == 0 && d == 0 && r == 0) return 1;

        for (int i = 0; i < n; i++) cin >> day[i];
        for (int i = 0; i < n; i++) cin >> night[i];

        sort(day, day+n);
        sort(night, night+n, sorter);
        fill(wtime, wtime+n, d);

        for (int i = 0; i < n; i++) wtime[i] -= (day[i] + night[i]);
        for (int i = 0; i < n; i++) {
            ot += -wtime[i];
        }
        cout << ot*r << '\n';
    }
}