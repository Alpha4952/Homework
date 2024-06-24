#include <bits/stdc++.h>
#define N 5000
#define bignum string
using namespace std;

int a[N], p[N];
int f[N + 1];
int n, m;

void sangngto(int n) {
    fill(p, p + n + 1, 1);
    p[0] = p[1] = 0;
    for (int i = 2; i * i <= n; i++)
        if (p[i] == 1)
            for (int j = i * i; j <= n; j += i) p[j] = 0;
    for (int i = 2; i <= n; i++)
        if (p[i] == 1) a[++m] = i;
}

int main() {
    freopen("addprime.inp", "r", stdin);
    freopen("addprime.out", "w", stdout);
    cin >> n;
    sangngto(n);
    f[0] = 1;
    for (int i = 1; i <= m; i++)
        for (int j = a[i]; j <= n; j++)
            if (f[j - a[i]] > 0)
                f[j] = (f[j] + f[j - a[i]]) % 1000000007;
    cout << f[n];
    return 0;
}
