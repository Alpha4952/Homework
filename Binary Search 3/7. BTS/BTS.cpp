#include <bits/stdc++.h>
using namespace std;

long long n, x[100001], y[100001], k;
double r, l, mid;

bool check (double eh) {
    double a = -1.0e15, b = 1.0e15;

    for (int i = 1; i <= n; i++) {
        a = max(a, double(x[i]) - sqrt(eh*eh - double(y[i] * y[i])));
        b = max(b, double(x[i]) + sqrt(eh*eh - double(y[i] * y[i])));

        if (a > b) return false;
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("BTS.inp", "r", stdin);
    freopen("BTS.out", "w", stdout);
    
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> x[i] >> y[i];

    l = 1;
    for (int i = 1; i <= n; i++) if (y[i] > l) l = y[i];
    r = l*2;

    while (!check(r)) {
        l = r;
        r *= 2;
    }

    k = int(log2((r - l) / 1.0e-4)) + 1;
    for (int i = 1; i <= k; i++) {
        mid = (r-l)/2;

        if (check(mid)) r = mid;
        else l = mid;
    }
    
    cout << setprecision(2) << fixed << (r + l) / 2;
}