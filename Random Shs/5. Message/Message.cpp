#include <bits/stdc++.h>
using namespace std;

long long t, n;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Message.inp", "r", stdin);
    freopen("Message.out", "w", stdout);
    
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;

        cout << (n-1) + n - 1 << '\n';
    }

    return 0;
}