#include <bits/stdc++.h>
using namespace std;

string a, b;

bool check(int i) {
    for (int _ = i; _ < i + b.length(); _++) {
        if (a[_] != b[_ - i]) return 0;
    }

    return 1;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("SubStr.inp", "r", stdin);
    freopen("SubStr.out", "w", stdout);

    cin >> a >> b;
    a += a;
    for (int i = 0; i < a.length() / 2; i++) {
        if (check(i)) cout << i + 1 << " ";
    }

    return 0;
}