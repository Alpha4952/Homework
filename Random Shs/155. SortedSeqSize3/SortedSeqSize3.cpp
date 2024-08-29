#include <bits/stdc++.h>
using namespace std;

long long t, n, uhm, minv, maxv;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("SortedSeqSize3.inp", "r", stdin);
    freopen("SortedSeqSize3.out", "w", stdout);

    cin >> t;
    while (t--) {
        cin >> n;

        vector <long long> a(n), smol(n, -1), huge(n, -1);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        minv = 0; maxv = n-1;

        for (int i = 0; i < n; i++) {
            if (a[i] <= a[minv]) minv = i;
            else smol[i] = minv;
        }

        for (int i = n-1; i >= 0; i--) {
            if (a[i] >= a[maxv]) maxv = i;
            else huge[i] = maxv;
        }

        uhm = 0;
        for (int i = 0; i < n; i++) {
            if (smol[i] != -1 && huge[i] != -1) {
                uhm = 1;
                break;
            }
        }

        if (uhm) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}