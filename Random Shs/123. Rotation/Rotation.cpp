#include <bits/stdc++.h>
using namespace std;

string s;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Rotation.inp", "r", stdin);
    freopen("Rotation.out", "w", stdout);
    
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        cout << s << '\n';
        s += s[0];
        s.erase(0, 1);
    }

    return 0;
}