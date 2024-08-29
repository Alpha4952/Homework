#include <bits/stdc++.h>
using namespace std;

long long n, a[100001];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Seq.inp", "r", stdin);
    freopen("Seq.out", "w", stdout);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);

    cout << max(a[n - 1] * a[n - 2] * a[n - 3], max(a[0] * a[1] * a[n - 1], a[0] * a[1] * a[2])) << endl;
}