#include <bits/stdc++.h>
using namespace std;

long long t, n, temp, r;

bool sortr(long long x, long long y) {
    return x > y;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("MinSumOfProduct.inp", "r", stdin);
    freopen("MinSumOfProduct.out", "w", stdout);
    
    cin >> t;
    while (t--) {
        cin >> n;

        vector <long long> a, b;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            a.push_back(temp);
        }
        for (int i = 0; i < n; i++) {
            cin >> temp;
            b.push_back(temp);
        } 

        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), sortr);

        r = 0;
        for (int i = 0; i < n; i++) {
            //cout << a[i] << " " << b[i] << '\n';
            r += a[i]*b[i];
        }

        cout << r << '\n';
    }
}