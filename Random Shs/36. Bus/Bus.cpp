#include<bits/stdc++.h>
using namespace std;

long long m, n, a, b, r;

int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("Bus.inp", "r", stdin);
    freopen("Bus.out", "w", stdout);

    cin >> n >> m >> a >> b;

    cout << (min((n/m)*b + min((n%m)*a, b), n*a));
    return 0;
}
