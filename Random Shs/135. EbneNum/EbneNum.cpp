#include <bits/stdc++.h>
using namespace std;

long long t, n;
string s;

string substr(string s, int start, int end) {
    string r = "";

    for (int i = start; i < end; i++) {
        r += s[i];
    }

    return r;
}

string ebne(string s, int n) {
    int c = 0;

    for (int i = 0; i < n; i++) {
        if ((s[i] - '0')%2) c++;
        if (c == 2) return s.substr(0, i+1);
    }

    return "-1";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("EbneNum.inp", "r", stdin);
    freopen("EbneNum.out", "w", stdout);
    
    cin >> t;
    while (t--) {
        cin >> n >> s;
        cout << ebne(s, n) << '\n';
    }

    return 0;
}