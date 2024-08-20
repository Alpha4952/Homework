#include <bits/stdc++.h>
using namespace std;

long long k, hmm[26], hehe;
string s;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("KString.inp", "r", stdin);
    freopen("KString.out", "w", stdout);

    fill(hmm, hmm + 26, 0);

    cin >> k >> s;

    for (int i = 0; i < s.length(); i++) {
        hmm[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (hmm[i] == 0) continue;
        if (hmm[i] % k) {
            cout << -1 << '\n';
            return 0;
        }
    }

    hehe = k;

    while (hehe) {
        for (int i = 0; i < 26; i++) {
            if (hmm[i] == 0) continue;
            for (int j = 0; j < hmm[i] / k; j++) {
                cout << char(i + 'a');
            }
        }

        hehe--;
    }

    return 0;
}