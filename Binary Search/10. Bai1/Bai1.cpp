#include <bits/stdc++.h>
using namespace std;

long long a, b, m, fs, ss, dif;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Bai1.inp", "r", stdin);
    freopen("Bai1.out", "w", stdout);
    
    cin >> a >> b;

    m = (a+b)/2;
    for (int i = a; i <= m; i++) fs += i;
    for (int i = m+1; i <= b; i++) ss += i;

    dif = abs(fs - ss);

    while (m >= a && m < b) {
        if (abs(fs - m - ss - m) < dif) {
            m--;
            dif = abs(fs - m - ss - m);
        } else if (abs(fs + m - ss + m) < dif) {
            m++;
            dif = abs(fs + m - ss + m);
        } else break;
    }
    cout << m;
}