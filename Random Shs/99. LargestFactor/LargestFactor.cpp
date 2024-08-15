#include <bits/stdc++.h>
using namespace std;

long long t, n, hmm, hmmmm;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("LargestFactor.inp", "r", stdin);
    freopen("LargestFactor.out", "w", stdout);
    
    cin >> t;
    while (t--) {
        cin >> n;

        vector <long long> fk;
        hmmmm = sqrt(n);

        for (int i = 2; i <= hmmmm; i++) {
            while(n % i == 0) {
                hmm = i;
                n /= i;
            }
        }
        
        if (n > 1) hmm = n;

        cout << hmm << '\n';
    }
}