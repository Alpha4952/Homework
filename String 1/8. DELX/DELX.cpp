#include <bits/stdc++.h>
using namespace std;

char c;
string s;

int main () {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    freopen("DELX.inp", "r", stdin);
    freopen("DELX.out", "w", stdout);

    cin >> c;
    for (int i = 0; i < 2; i++) getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != c) cout << s[i];
    }
}