#include <bits/stdc++.h>
using namespace std;

bool check (string n) {
    long long a1[100001], a2[100001], len = n.length();

    if (len < 2) return false;
    for (int i = 0; i < len; i++) {
        a1[i] = int(n[i]) - '0';
        a2[i] = a1[i];
    }
    sort(a2, a2 + len);

    for (int i = 0; i < len; i++) if (a1[i] != a2[i]) return false;
    return true;
}

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("STEP.inp", "r", stdin);
    freopen("STEP.out", "w", stdout);
    long long n, c;
    string t;

    cin >> n;
    c = 0;
    for (int i = 0; i < n; i++) {
        cin >> t;
        if (check(t)) c++;
    }
    cout << c;
}