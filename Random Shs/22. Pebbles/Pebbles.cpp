#include<bits/stdc++.h>
using namespace std;

double n, k, s, w[1000000];

int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("Pebbles.inp", "r", stdin);
    freopen("Pebbles.out", "w", stdout);

    cin >> n >> k;

    for (int i = 1; i <= n; i++) cin >> w[i];

    s = 0;
    for (int i = 1; i <= n; i++) s += ceil((double) w[i] / k);

    cout << ceil((double) s / 2) << endl;
    return 0;
}
