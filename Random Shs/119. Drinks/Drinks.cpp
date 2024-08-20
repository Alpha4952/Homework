#include <bits/stdc++.h>
using namespace std;

long long n;
double r, megatron;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Drinks.inp", "r", stdin);
    freopen("Drinks.out", "w", stdout);

    r = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> megatron;

        r += megatron;
    }

    cout << setprecision(3) << fixed << r / n << endl;
    return 0;
}