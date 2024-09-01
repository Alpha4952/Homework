#include <bits/stdc++.h>
using namespace std;

long long t, n, temp;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Rearrange.inp", "r", stdin);
    freopen("Rearrange.out", "w", stdout);
    
    cin >> t;
    while (t--) {
        vector <long long> hmm;
        
        cin >> n;

        for (int i = 0; i < n; i++) {
            cin >> temp;
            hmm.push_back(temp);
        }

        sort(hmm.begin(), hmm.end());

        if (hmm[n-1] < hmm[n-2] + hmm[0]) {
            cout << "YES" << '\n';
            for (int i = 0; i < hmm.size(); i++) cout << hmm[i] << " ";
            cout << '\n';
        } else cout << "NO" << '\n';
    }
}