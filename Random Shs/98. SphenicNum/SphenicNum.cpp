#include <bits/stdc++.h>
using namespace std;

long long t, n, hmm;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("SphenicNum.inp", "r", stdin);
    freopen("SphenicNum.out", "w", stdout);
    
    cin >> t;
    while (t--) {
        cin >> n;

        vector <long long> fk;
        hmm = sqrt(n);

        for (int i = 2; i <= hmm; i++) {
            while(n % i == 0) {
                fk.push_back(i);
                n /= i;
            }
        }
        
        if (n > 1) fk.push_back(n);

        cout << (fk.size() == 3) << '\n';
    }
}