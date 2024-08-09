#include <bits/stdc++.h>
using namespace std;

long long a, sa;
string n;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("ChinhPhuong.inp", "r", stdin);
    freopen("ChinhPhuong.out", "w", stdout);
    
    cin >> n;

    a = n[0] + n[1] + n[2] + n[3] - 4*'0';

    sa = sqrt(a);

    if (sa*sa == a) cout << "YES";
    else cout << "NO";

    cout << endl;
    return 0;
}