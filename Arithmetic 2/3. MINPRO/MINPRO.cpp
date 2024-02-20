#include <bits/stdc++.h>
using namespace std;

long long t, a , b, x, y, n, temp, fa, fb, fn, res;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("MINPRO.inp", "r", stdin);
    freopen("MINPRO.out", "w", stdout);
    cin >> t;

    for (int p = 0; p < t; p++) {
        cin >> a >> b >> x >> y >> n;

        if (a < b) {
            temp = a;
            a = b;
            b = temp;
            
            temp = x;
            x = y;
            y = temp;
        }
        fa = a; fb = b; fn = n;

        if (a > b) {
            a -= n;

            if (a < x) {
                a = x;
                n -= (fa-x);
            } else n = 0;
            b -= n;
            
            if (b < y) b = y;
            res = a*b;
            
            n = fn; b = fb; a = fa;
            b -= n;
            
            if (b < y) {
                b = y;
                n -= (fb-y);
            } else n = 0;
            a -= n;
            
            if (a < x) a = x;
            res = min(res, a*b);
        } else if (a == b) {
            if (x < y) {
                a -= n;

                if (a < x) {
                    a = x;
                    n -= (fa-x);
                } else n = 0;
                b -= n;
                
                if (b < y) b = y;
                n = 0;
            } else {
                b -= n;
                
                if (b < y) {
                    b = y;
                    n -= (fb-y);
                } else n = 0;
                a -= n;
                
                if (a < x) a = x;
                n = 0;
            }
            res = a*b;
        }
        cout << res << '\n';
    }
}