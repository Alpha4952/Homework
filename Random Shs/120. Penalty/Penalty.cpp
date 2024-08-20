#include <bits/stdc++.h>
using namespace std;

long long n, inp, r;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Penalty.inp", "r", stdin);
    freopen("Penalty.out", "w", stdout);
    
    r = 0;

    cin >> n;
    while (n--) {
        cin >> inp;
        
        if (inp == 1) r++;
        else r--;
    }

    cout << abs(r) << endl;
    return 0;
}