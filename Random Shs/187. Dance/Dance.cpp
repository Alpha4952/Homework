#include <bits/stdc++.h>
using namespace std;

long long n, a[1000001], b[1000001], r;
string s;
map <long long, long long> m;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Dance.inp", "r", stdin);
    freopen("Dance.out", "w", stdout);
    
    cin >> n >> s;

    a[0] = 0; b[0] = 0;
    for (int i = 1; i <= n; i++) {
        a[i] = a[i - 1];
        b[i] = b[i - 1];
        if (s[i - 1] == 'a') a[i]++;
        else b[i]++;
    }

    r = 0;
    m[0] = 1;
    for (int i = 1; i <= n; i++) {
        r += m[a[i] - b[i]];
        m[a[i] - b[i]]++;
    }

    cout << r << endl;
    return 0;
}