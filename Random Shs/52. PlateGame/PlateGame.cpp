#include<bits/stdc++.h>
using namespace std;

int a, b, r;

int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("PlateGame.inp", "r", stdin);
    freopen("PlateGame.out", "w", stdout);

    cin >> a >> b >> r;

    cout << (a < r * 2 || b < r * 2 ? "Second" : "First");
    return 0;
}
