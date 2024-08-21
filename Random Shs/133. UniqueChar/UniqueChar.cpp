#include <bits/stdc++.h>
using namespace std;

long long t, first[26], times[26], r;
string s;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("UniqueChar.inp", "r", stdin);
    freopen("UniqueChar.out", "w", stdout);

    cin >> t;
    while (t--) {
        cin >> s;

        fill(first, first + 26, 0);
        fill(times, times + 26, 0);
        for (int i = 0; i < s.length(); i++) {
            if (!first[s[i] - 'a']) first[s[i] - 'a'] = i+1;
            
            times[s[i] - 'a']++;
        }

        r = s.length() + 1;
        for (int i = 0; i < 26; i++) {
            if (times[i] == 1) r = min(first[i], r);
        }
        
        

        if (r != s.length() + 1) cout << r << '\n';
        else cout << -1 << '\n';
    }
}