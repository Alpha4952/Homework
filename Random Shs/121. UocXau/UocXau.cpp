#include <bits/stdc++.h>
using namespace std;

string s, hmm, ehe;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("UocXau.inp", "r", stdin);
    freopen("UocXau.out", "w", stdout);
    
    cin >> s;

    hmm = "";

    for (int i = 0; i < s.length(); i++) {
        hmm += s[i];
        if (s.length() % hmm.length()) continue;
        
        ehe = "";

        for (int j = 0; j < s.length() / hmm.length(); j++) ehe += hmm;

        if (ehe == s) {
            cout << hmm;
            return 0;
        }
    }
}