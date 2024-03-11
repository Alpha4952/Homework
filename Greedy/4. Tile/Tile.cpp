#include <bits/stdc++.h>
using namespace std;

long long n, possible, arr[100001], stacked;

bool sorter (long long a, long long b) {
    return a > b;
}

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("Tile.inp", "r", stdin);
    //freopen("Tile.out", "w", stdout);
    
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n, sorter);

    for (int i = 0; i <= min(possible, n-1); i++) {
        possible = arr[i] + 1 - stacked;
        stacked++;
    }
    cout << stacked;
}