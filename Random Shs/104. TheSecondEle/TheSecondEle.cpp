#include <bits/stdc++.h>
using namespace std;

long long n, a[1000001];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("TheSecondEle.inp", "r", stdin);
    freopen("TheSecondEle.out", "w", stdout);
    
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a, a + n);

    cout << a[n - 2] << endl;
    return 0;
}