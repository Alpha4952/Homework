#include <bits/stdc++.h>
using namespace std;

int n, hmm;
string s1, s2, s3;

int optimus(int i) {
    int c = 1;
    while (1) {
        //cout << i << " " << c << '\n';

        if (i - c == -1 || i + c == n) return (c - 1) * 2 + 1;
        if (s1[i - c] != s1[i + c]) return (c - 1) * 2 + 1;

        c++;
    }
}

int prime(int i) {
    int c = 1;

    if (s1[i] != s1[i + 1] || i == n - 1) return 1;
    while (1) {
        //cout << i << " " << c << '\n';
        if (i - c == -1 || i + 1 + c == n) return c * 2;
        if (s1[i - c] != s1[i + 1 + c]) return c * 2;
        c++;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("PalindStr.inp", "r", stdin);
    freopen("PalindStr.out", "w", stdout);

    hmm = 1;

    cin >> n >> s1;
    s3 = s1;
    //cout << n << " " << s1 << '\n';
    s2 = "";
    for (int i = 0; i < n; i++) {
        hmm = max(hmm, max(optimus(i), prime(i)));
        //cout << i << " " << hmm << '\n';
    }

    cout << hmm << endl;
    return 0;
}