#include <bits/stdc++.h>
using namespace std;

long long sum, l, r;

int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("Mul13.inp", "r", stdin);
    freopen("Mul13.out", "w", stdout);

    cin >> l >> r;

    sum = (l + r) * (r - l + 1) / 2;

    while (l % 13 != 0) l++;
    while (r % 13 != 0) r--;
    
    cout << sum - (l + r) * ((r - l) / 13 + 1) / 2 << endl;
    return 0;
}
