#include <bits/stdc++.h>
using std::cin;
using std::cout;

long long n, t, c1, c2, c3, r;

int main () {
    std::ios_base::sync_with_stdio(NULL); std::cin.tie(NULL); std::cout.tie(NULL);
    std::freopen("Taxi.inp", "r", stdin);
    std::freopen("Taxi.out", "w", stdout);
    
    c1 = 0; c2 = 0; c3 = 0; r = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        if (t == 1) c1++;
        else if (t == 2) c2++;
        else if (t == 3) c3++;
        else if (t == 4) r++;
    }

    //cout << c1 << " " << c2 << " " << c3 << " " << r << '\n';

    if (c1 >= c3) {
        c1 -= c3;
        r += c3;
        c3 = 0;
    } else {
        r += c3;
        c3 = 0;
        c1 = 0;
    }

    //cout << c1 << " " << c2 << " " << c3 << " " << r << '\n';

    //c1 = std::max(0ll, c1 - c3);
    
    r += c2/2;
    c2 %= 2;
    //cout << c1 << " " << c2 << " " << c3 << " " << r << '\n';

    if (c2 > 0) {
        if (c1 > 0 && c1 <= 2) {
            r++;
            c2 = 0;
            c1 = 0;
        }
        else if (c1 >= 3) {
            r += 1;
            c2 = 0;
            c1 = std::max(0ll, c1 - 2);
        }
        else if (c1 == 0) r++;
    }
    //cout << c1 << " " << c2 << " " << c3 << " " << r << '\n';

    r += c1 / 4;
    c1 %= 4;
    if (c1) r++;
    c1 = 0;

    cout << r << std::endl;
    return 0;
}