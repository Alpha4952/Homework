#include <bits/stdc++.h>
using namespace std;

long long n, s, k, a[100001], c;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("RGAME.inp", "r", stdin);
    freopen("RGAME.out", "w", stdout);
    cin >> n >> s >> k;
    int remain = n;

    fill(a+1, a+n+1, 0);
    int i = 1; c = 1;
    while (i <= n+1) {
        if (i == n+1) {
            i = 1;
            continue;
        }
        if (a[i] == -1) {
            i++;
            continue;
        }

        if ((c) == s) {
            a[i] = -1;
            c = 0;
            remain--;
        }
        if (remain == 1) break;
        c++;
        i++;
    }
    
    
    
    for (int i = 1; i <= n; i++) if (a[i] != -1) remain = i;
    cout << remain << '\n';

    
    if (k >= remain) cout << 1+k-remain;
    else cout << n-(remain-k)+1;
}