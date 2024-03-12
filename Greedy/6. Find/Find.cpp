#include <bits/stdc++.h>
using namespace std;

long long n, a[10];

bool prime (long long nu) {
    if (nu < 2) return false;
    if (nu < 4) return true;
    if (nu % 2 == 0) return false;
    for (int i = 3; i*i < nu; i+=2) if (nu%i == 0) return false;
    return true;
}

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("Find.inp", "r", stdin);
    //freopen("Find.out", "w", stdout);
    
    cin >> n;

    if (n < 10) {
        cout << 1 << n;
        return 1;
    }
    if (prime(n)) {
        cout << -1;
        return 1;
    }

    for (int i = 9; i >= 2; i--) {
        while (n%i == 0) {
            n /= i;
            a[i]++;
        }
    }
    for (int i = 1; i <= 9; i++) if (a[i]) for (int j = 0; j < a[i]; j++) cout << i;
}