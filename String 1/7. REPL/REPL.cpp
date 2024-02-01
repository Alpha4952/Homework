#include <bits/stdc++.h>
using namespace std;

string s, s1, s2;
bool t;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("REPL.inp", "r", stdin);
    freopen("REPL.out", "w", stdout);

    cin >> s1 >> s2;
    for (int i = 0; i < 2; i++) getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        t = true;
        for (int j = 0; j < s1.length(); j++) {
            if (s[i + j] != s1[j]) t = false;
        }
        if (t) {
            cout << s2;
            i += s1.length() - 1;
        } else cout << s[i];
    }
}