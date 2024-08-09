#include <bits/stdc++.h>
using namespace std;

long long n, m, c = 0;

int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("Pencil.inp", "r", stdin);
    freopen("Pencil.out", "w", stdout);
    
    cin >> n >> m;

    while (n > 0) {
        c++;
        if (c % m) n--;
    }
    
    cout << c << endl;
    return 0;
}
