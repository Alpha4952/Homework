#include <bits/stdc++.h>
using namespace std;

long long t, i, j, hmm, c1, c2;
string s1, s2;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("BrokenKeyboard.inp", "r", stdin);
    freopen("BrokenKeyboard.out", "w", stdout);

    cin >> t;
    while (t--) {
        cin >> s1 >> s2;
        vector <long long> v1c, v2c, v1s, v2s;

        hmm = 1;

        if (s1.length() > s2.length() || (s1.length() == s2.length() && s1 != s2)) {
            cout << "NO" << '\n';
            continue;
        }
        if (s1 == s2) {
            cout << "YES" << '\n';
            continue;
        }

        i = 0; j = 0;
        v1s.push_back(s1[0] - 'a');
        v2s.push_back(s2[0] - 'a');
        c1 = 1; c2 = 1;

        for (int i = 1; i <= s1.length(); i++) {
            if (i == s1.length()) {
                v1c.push_back(c1);
                break;
            }
            if (s1[i] - 'a' != v1s[v1s.size() - 1]) {
                v1c.push_back(c1);
                c1 = 1;
                v1s.push_back(s1[i] - 'a');
                continue;
            }
            c1++;
        }
        for (int i = 1; i <= s2.length(); i++) {
            if (i == s2.length()) {
                v2c.push_back(c2);
                break;
            }
            if (s2[i] - 'a' != v2s[v2s.size() - 1]) {
                v2c.push_back(c2);
                c2 = 1;
                v2s.push_back(s2[i] - 'a');
                continue;
            }
            c2++;
        }

        if (v1c.size() != v2c.size()) {
            cout << "NO" << '\n';
            continue;
        }

        for (int i = 0; i <= v1c.size(); i++) {
            if (i == v1c.size()) {
                cout << "YES" << '\n';
                break;
            }
            if (v1s[i] != v2s[i]) {
                cout << "NO" << '\n';
                break;
            }
            if (v1c[i] > v2c[i]) {
                cout << "NO" << '\n';
                break;
            }
        }
    }
}