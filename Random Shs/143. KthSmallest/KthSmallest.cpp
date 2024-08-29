#include <bits/stdc++.h>
using namespace std;

long long t, n, k, hmm;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("KthSmallest.inp", "r", stdin);
    freopen("KthSmallest.out", "w", stdout);
    
    cin >> t;
    while (t--) {
        cin >> n;

        vector <long long> ehe;

        while (n--) {
            cin >> hmm;
            ehe.push_back(hmm);
        }

        sort(ehe.begin(), ehe.end());

        cin >> k;

        cout << ehe[k-1] << '\n';
    }
}