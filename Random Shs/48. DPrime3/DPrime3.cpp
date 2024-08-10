#include<bits/stdc++.h>
using namespace std;

int n, c, x;
int p[1000001];

void sieve() {
    fill(p + 2, p + 1000001 + 1, 1);
    for (int i = 2; i * i <= 1000001; i++)
        if (p[i] == 1)
            for (int j = i * i; j <= 1000001; j += i) p[j] = 0;
}

bool prime(int z) {
    if (n < 2) return false;
    for (int i = 2; i * i <= z; i++)
        if (z % i == 0) return false;
    return true;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("DPrime3.inp", "r", stdin);
    freopen("DPrime3.out", "w", stdout);

    sieve();

    cin >> n;

    x = 2; c = 0;

    for (int y = 3; y * y <= n - 4; y++) {
        if (p[y] == 1) {
            int z = y * y + 4;
            if (prime(z)) {
                c = 1;
                cout << x << " " << y << " " << z << endl;
            }
        }
    }

    if (!c) cout << "-1" << endl;
    return 0;

}
