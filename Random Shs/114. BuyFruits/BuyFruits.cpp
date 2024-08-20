#include <bits/stdc++.h>
using namespace std;

long long n, m;
double megatron[100001], optimus, prime, crime;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("BuyFruits.inp", "r", stdin);
    freopen("BuyFruits.out", "w", stdout);

    cin >> n >> m;
    crime = 1e18;
    for (int i = 0; i < n; i++) {
        cin >> optimus >> prime;

        crime = min(crime, optimus / prime * m);
    }

    cout << setprecision(8) << fixed << crime << endl;
}