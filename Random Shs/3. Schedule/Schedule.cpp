#include <bits/stdc++.h>
using namespace std;

long long n, x, t;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Schedule.inp", "r", stdin);
    freopen("Schedule.out", "w", stdout);
    
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> x;
        cout << max(0ll, (n-1)*10 - (n-1)*x) << '\n';
    }
}