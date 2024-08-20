#include <bits/stdc++.h>
using namespace std;

long long n;
string s1, s2, s3, s4;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("FiboStr.inp", "r", stdin);
    freopen("FiboStr.out", "w", stdout);
    
    cin >> s1 >> s2;
    cin >> n;
    
    if (n == 1) cout << s1 << endl;
    else if (n == 2) cout << s2 << endl;
    else {
        for (int i = 3; i <= n; i++) {
            s3 = s2 + s1;
            s4 = s1;
            s1 = s2;
            s2 = s3;
        }
        cout << s2 << endl;
    }

    return 0;
}