#include <bits/stdc++.h>
using namespace std;

long long m, n, row, rowr, p, maxv, arr[101][101];

bool prime (long long n) {
    if (n < 2) return false;
    else if (n < 4) return true;
    if (n%2 == 0) return false;
    for (int i = 3; i*i <= n; i+=2) if (n%i == 0) return false;
    return true;
}

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("MTNT.inp", "r", stdin);
    freopen("MTNT.out", "w", stdout);
    cin >> m >> n;
    rowr = 0; p = -1; maxv = -1000000;
    
    for (int i = 0; i < m; i++) {
        row = 1;
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            if (j > 0) if (arr[i][j] < arr[i][j-1]) row = -1;
            if (prime(arr[i][j])) if (maxv < arr[i][j]) {
                p = 1;
                maxv = arr[i][j];
            }
        }
        if (row == 1) rowr = 1;
    }
    if (rowr) cout << "YES";
    else cout << "NO";
    if (maxv != -1000000) cout << '\n' << maxv;
    else cout << '\n' << -1;
}
    