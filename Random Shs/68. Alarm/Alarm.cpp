#include <bits/stdc++.h>
using namespace std;

long long h, m;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Alarm.inp", "r", stdin);
    freopen("Alarm.out", "w", stdout);
    
    cin >> h >> m;
    if (m >= 45) cout << h << " " << m-45;
    else {
        if (h == 0) cout << 23;
        else cout << h-1;
        cout << " " << 60 - (45-m);
    }

    return 0;
}