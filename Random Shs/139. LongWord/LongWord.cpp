#include <bits/stdc++.h>
using namespace std;

long long t;
string s;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("LongWord.inp", "r", stdin);
    freopen("LongWord.out", "w", stdout);
    
    cin >> t;
    while (t--) {
        cin >> s;
        
        if (s.length() <= 10) {
            cout << s << '\n';
            continue;
        }

        cout << s[0] << s.length() - 2 << s[s.length() - 1] << '\n';
    }
}