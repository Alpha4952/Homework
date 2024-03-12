#include <bits/stdc++.h>
using namespace std;

long long n, possible, arr[101], arr2[202], t;

bool sorter (long long a, long long b) {
    return a > b;
}

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("Tile.inp", "r", stdin);
    //freopen("Tile.out", "w", stdout);
    
    cin >> n;

    if (n == 0) {
        cout << 0;
        return 0;
    }

    for (int i = 1; i <= n; i++) cin >> arr[i];
    sort(arr+1, arr+n+1, sorter);

    for (int i = 1; i <= n; i++) {
        arr2[arr[i]+i] = 1;
    }

    for (long long i = 1; i <= 200; i++) {
        if (arr2[i]) {
            cout << min(i, n);
            return 0;
        }
    }
}