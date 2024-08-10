#include<bits/stdc++.h>
using namespace std;

long long n;

int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("Hands.inp", "r", stdin);
    freopen("Hands.out", "w", stdout);

    cin >> n;
    cout << n * (n - 1) / 2 << endl;
    return 0;
}
