#include <bits/stdc++.h>
using namespace std;

long long t, n, k, a[100001];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("SplitSeq.inp", "r", stdin);
    freopen("SplitSeq.out", "w", stdout);
    
    cin >> t;
    while (t--) {
        vector <long long> odd;

        cin >> n >> k;
        for (int i = 0; i < n; i++) {
            cin >> a[i];

            if (a[i] % 2) odd.push_back(i + 1);
        }

        if (odd.size() < k || (odd.size() - k) % 2 || n < k) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << '\n';
        for (int i = 0; i < k-1; i++) cout << odd[i] << " ";
        cout << n << '\n';
    }
}