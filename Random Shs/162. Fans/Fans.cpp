#include <bits/stdc++.h>
using namespace std;

long long n, t;

struct fan{
    string name; long long tfyd;
}fans[100001];

bool smol(string a, string b) {
    for (int i = 0; i < min(a.length(), b.length()); i++) {
        if (a[i] > b[i]) return 0;
        if (a[i] < b[i]) return 1;
    }

    if (a.length() < b.length()) return 1;
    if (a.length() > b.length()) return 0;

    return 0;
}

bool sortr(fan a, fan b) {
    if (a.tfyd != b.tfyd) return a.tfyd > b.tfyd;
    else {
        return smol(a.name, b.name);
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Fans.inp", "r", stdin);
    freopen("Fans.out", "w", stdout);
    
    cin >> n >> t;
    for (int i = 0; i < n; i++) {
        cin >> fans[i].name >> fans[i].tfyd;
    }

    sort(fans, fans + n, sortr);

    for (int i = 0; i < t; i++) {
        cout << fans[i].name << '\n';
    }
    
    return 0;
}