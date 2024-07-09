#include <bits/stdc++.h>
using namespace std;

long long a[5], e;

int bktrk(int a1, int a2, int a3, int a4, int a5) {
    int a = 0;
    if ((((a1 + a2) + a3) + a4) + a5 == 23) a = 1;
    if ((((a1 + a2) + a3) + a4) - a5 == 23) a = 1;
    if ((((a1 + a2) + a3) + a4) * a5 == 23) a = 1;
    if ((((a1 + a2) + a3) - a4) + a5 == 23) a = 1;
    if ((((a1 + a2) + a3) - a4) - a5 == 23) a = 1;
    if ((((a1 + a2) + a3) - a4) * a5 == 23) a = 1;
    if ((((a1 + a2) + a3) * a4) + a5 == 23) a = 1;
    if ((((a1 + a2) + a3) * a4) - a5 == 23) a = 1;
    if ((((a1 + a2) + a3) * a4) * a5 == 23) a = 1;

    if ((((a1 + a2) - a3) + a4) + a5 == 23) a = 1;
    if ((((a1 + a2) - a3) + a4) - a5 == 23) a = 1;
    if ((((a1 + a2) - a3) + a4) * a5 == 23) a = 1;
    if ((((a1 + a2) - a3) - a4) + a5 == 23) a = 1;
    if ((((a1 + a2) - a3) - a4) - a5 == 23) a = 1;
    if ((((a1 + a2) - a3) - a4) * a5 == 23) a = 1;
    if ((((a1 + a2) - a3) * a4) + a5 == 23) a = 1;
    if ((((a1 + a2) - a3) * a4) - a5 == 23) a = 1;
    if ((((a1 + a2) - a3) * a4) * a5 == 23) a = 1;
    
    if ((((a1 + a2) * a3) + a4) + a5 == 23) a = 1;
    if ((((a1 + a2) * a3) + a4) - a5 == 23) a = 1;
    if ((((a1 + a2) * a3) + a4) * a5 == 23) a = 1;
    if ((((a1 + a2) * a3) - a4) + a5 == 23) a = 1;
    if ((((a1 + a2) * a3) - a4) - a5 == 23) a = 1;
    if ((((a1 + a2) * a3) - a4) * a5 == 23) a = 1;
    if ((((a1 + a2) * a3) * a4) + a5 == 23) a = 1;
    if ((((a1 + a2) * a3) * a4) - a5 == 23) a = 1;
    if ((((a1 + a2) * a3) * a4) * a5 == 23) a = 1;

    

    if ((((a1 - a2) + a3) + a4) + a5 == 23) a = 1;
    if ((((a1 - a2) + a3) + a4) - a5 == 23) a = 1;
    if ((((a1 - a2) + a3) + a4) * a5 == 23) a = 1;
    if ((((a1 - a2) + a3) - a4) + a5 == 23) a = 1;
    if ((((a1 - a2) + a3) - a4) - a5 == 23) a = 1;
    if ((((a1 - a2) + a3) - a4) * a5 == 23) a = 1;
    if ((((a1 - a2) + a3) * a4) + a5 == 23) a = 1;
    if ((((a1 - a2) + a3) * a4) - a5 == 23) a = 1;
    if ((((a1 - a2) + a3) * a4) * a5 == 23) a = 1;

    if ((((a1 - a2) - a3) + a4) + a5 == 23) a = 1;
    if ((((a1 - a2) - a3) + a4) - a5 == 23) a = 1;
    if ((((a1 - a2) - a3) + a4) * a5 == 23) a = 1;
    if ((((a1 - a2) - a3) - a4) + a5 == 23) a = 1;
    if ((((a1 - a2) - a3) - a4) - a5 == 23) a = 1;
    if ((((a1 - a2) - a3) - a4) * a5 == 23) a = 1;
    if ((((a1 - a2) - a3) * a4) + a5 == 23) a = 1;
    if ((((a1 - a2) - a3) * a4) - a5 == 23) a = 1;
    if ((((a1 - a2) - a3) * a4) * a5 == 23) a = 1;
    
    if ((((a1 - a2) * a3) + a4) + a5 == 23) a = 1;
    if ((((a1 - a2) * a3) + a4) - a5 == 23) a = 1;
    if ((((a1 - a2) * a3) + a4) * a5 == 23) a = 1;
    if ((((a1 - a2) * a3) - a4) + a5 == 23) a = 1;
    if ((((a1 - a2) * a3) - a4) - a5 == 23) a = 1;
    if ((((a1 - a2) * a3) - a4) * a5 == 23) a = 1;
    if ((((a1 - a2) * a3) * a4) + a5 == 23) a = 1;
    if ((((a1 - a2) * a3) * a4) - a5 == 23) a = 1;
    if ((((a1 - a2) * a3) * a4) * a5 == 23) a = 1;



    if ((((a1 * a2) + a3) + a4) + a5 == 23) a = 1;
    if ((((a1 * a2) + a3) + a4) - a5 == 23) a = 1;
    if ((((a1 * a2) + a3) + a4) * a5 == 23) a = 1;
    if ((((a1 * a2) + a3) - a4) + a5 == 23) a = 1;
    if ((((a1 * a2) + a3) - a4) - a5 == 23) a = 1;
    if ((((a1 * a2) + a3) - a4) * a5 == 23) a = 1;
    if ((((a1 * a2) + a3) * a4) + a5 == 23) a = 1;
    if ((((a1 * a2) + a3) * a4) - a5 == 23) a = 1;
    if ((((a1 * a2) + a3) * a4) * a5 == 23) a = 1;

    if ((((a1 * a2) - a3) + a4) + a5 == 23) a = 1;
    if ((((a1 * a2) - a3) + a4) - a5 == 23) a = 1;
    if ((((a1 * a2) - a3) + a4) * a5 == 23) a = 1;
    if ((((a1 * a2) - a3) - a4) + a5 == 23) a = 1;
    if ((((a1 * a2) - a3) - a4) - a5 == 23) a = 1;
    if ((((a1 * a2) - a3) - a4) * a5 == 23) a = 1;
    if ((((a1 * a2) - a3) * a4) + a5 == 23) a = 1;
    if ((((a1 * a2) - a3) * a4) - a5 == 23) a = 1;
    if ((((a1 * a2) - a3) * a4) * a5 == 23) a = 1;
    
    if ((((a1 * a2) * a3) + a4) + a5 == 23) a = 1;
    if ((((a1 * a2) * a3) + a4) - a5 == 23) a = 1;
    if ((((a1 * a2) * a3) + a4) * a5 == 23) a = 1;
    if ((((a1 * a2) * a3) - a4) + a5 == 23) a = 1;
    if ((((a1 * a2) * a3) - a4) - a5 == 23) a = 1;
    if ((((a1 * a2) * a3) - a4) * a5 == 23) a = 1;
    if ((((a1 * a2) * a3) * a4) + a5 == 23) a = 1;
    if ((((a1 * a2) * a3) * a4) - a5 == 23) a = 1;
    if ((((a1 * a2) * a3) * a4) * a5 == 23) a = 1;

    return a;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Expression.inp", "r", stdin);
    freopen("Expression.out", "w", stdout);
    
    while (cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4]) {
        if (!a[0] && !a[1] && !a[2] && !a[3] && !a[4]) break;

        e = 0;

        for (int i = 0; i < 5; i++) {
            if (e) break;
            for (int j = 0; j < 5; j++) {
                if (e) break;
                for (int k = 0; k < 5; k++) {
                    if (e) break;
                    for (int l = 0; l < 5; l++) {
                        if (e) break;
                        for (int m = 0; m < 5; m++) {
                            if (e) break;
                            if (i == j || i == k || i == l || i == m || j == k || j == l || j == m || k == l || k == m || j == m || l == m) continue;

                            if (bktrk(a[i], a[j], a[k], a[l], a[m])) {
                                e = 1;
                            }
                        }
                    }
                }
            }
        }

        if (e) cout << "Possible";
        else cout << "Impossible";
        cout << '\n';
    }

    return 0;
}