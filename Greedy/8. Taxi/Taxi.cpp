#include <bits/stdc++.h>
using namespace std;

int g, t, g3, g2, g1, c;

bool sorter (int a, int b) {
    return a > b;
}

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("Taxi.inp", "r", stdin);
    //freopen("Taxi.out", "w", stdout);
    
    cin >> g;
    for (int i = 0; i < g; i++) {
        cin >> c;
        if (c == 4) t++;
        else if (c == 3) g3++;
        else if (c == 2) g2++;
        else if (c == 1) g1++;
    }

    t += g3;
    g1 = max(0, g1-g3);

    while (g2 >= 2) {
        t++;
        g2 -= 2;
    }
    if (g2 == 1) {
        if (g1 <= 2) g1 = 0;
        else g1 -= 2;
        t++;
    }
    
    while (g1 > 0) {
        t++;
        g1 -= 4;
    }
    cout << t;
}