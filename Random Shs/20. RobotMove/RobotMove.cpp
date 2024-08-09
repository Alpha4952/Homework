#include<bits/stdc++.h>
using namespace std;

long long x1, x2, y1, y2;

int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("robotmove.inp", "r", stdin);
    freopen("robotmove.out", "w", stdout);

    cin >> x1 >> y1 >> x2 >> y2;

    cout << max(abs(x2 - x1), abs(y2 - y1));
    return 0;
}
