#include <bits/stdc++.h>
using namespace std;

long long a[26];
string s;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("CntChar.inp", "r", stdin);
    freopen("CntChar.out", "w", stdout);
    
    fill(a, a + 26, 0);
    
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        a[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (a[i]) {
            cout << char(i + 'a') << ":" << a[i] << '\n';
        }
    }

    return 0;
}