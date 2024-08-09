#include <bits/stdc++.h>
using namespace std;

long long n, h;

int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("House.inp", "r", stdin);
    freopen("House.out", "w", stdout);
    
    cin >> n >> h;

    if (h % 2 == 1) cout << (h - 1) / 2 + 1;
    else cout << (n - h) / 2 + 1;
    
    return 0;
}
