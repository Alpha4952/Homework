#include <bits/stdc++.h>
using namespace std;

long long n, a, b, c, glass, milk;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("BuyMilk.inp", "r", stdin);
    freopen("BuyMilk.out", "w", stdout);
    
    cin >> n >> a >> b >> c;

    milk = 0;
    if (a >= b - c) {
        if (n >= b) {
            milk = (n - b) / (b - c);
            n -= milk * (b - c);
        }
        while (n >= b) {
            n -= (b - c);
            milk++;
        }
    }

    if (n >= a) {
        milk += n/a;
        n -= n/a*a;
    }

    cout << milk << endl;
    return 0;
}