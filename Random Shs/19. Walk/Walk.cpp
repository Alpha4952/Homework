#include<bits/stdc++.h>
using std::cin;
using std::cout;

long long n, m, stepmin, stepmax;

int main() {
    std::ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("walk.inp", "r", stdin);
    freopen("walk.out", "w", stdout);

    cin >> n >> m;

    stepmin = (n + 1) / 2;
    stepmax = n;

    for (int i = stepmin; i <= stepmax; i++) {
        if (i % m) continue;

        cout << i;
        return 0;

    }

    cout << -1;
    return 0;
}
