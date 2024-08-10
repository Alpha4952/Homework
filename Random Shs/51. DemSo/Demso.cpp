#include<bits/stdc++.h>
using namespace std;

long long l, r;

long long f(long long s) {
    if (s < 10) return s;
    long long result = s / 10 + 9, c = s;
    while (c >= 10) c /= 10;
    if (c > (s % 10)) result--;
    return result;
}

int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("DemSo.inp", "r", stdin);
    freopen("DemSo.out", "w", stdout);

    cin >> l >> r;
    cout << f(r) - f(l - 1) << endl;
    return 0;
}
