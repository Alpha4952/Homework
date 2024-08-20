#include <bits/stdc++.h>
using namespace std;

long long n, t;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Number.inp", "r", stdin);
    freopen("Number.out", "w", stdout);
    
    cin >> n;
    t = 0;
    while (n > 1) {
        if (n%2) {
            n = n*3 + 1;
            t++;
        } else {
            n /= 2;
            t++;
        }
    }

    cout << t << endl;
    return 0;
}