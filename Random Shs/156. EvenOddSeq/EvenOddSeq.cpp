#include <bits/stdc++.h>
using namespace std;

long long t, n, a[100001];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("EvenOddSeq.inp", "r", stdin);
    freopen("EvenOddSeq.out", "w", stdout);
    
    cin >> t;
    while (t--) {
        cin >> n;

        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a, a + n);
        for (int i = 0; i < n; i++) if (a[i] % 2 == 0) cout << a[i] << " ";
        for (int i = 0; i < n; i++) if (a[i] % 2) cout << a[i] << " ";
        cout << '\n';
    }
}