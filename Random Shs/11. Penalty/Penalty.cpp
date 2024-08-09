#include <bits/stdc++.h>
using namespace std;

long long t, vt, vq, vl, type, gt, gq, temp;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Penalty.inp", "r", stdin);
    freopen("Penalty.out", "w", stdout);

    cin >> t;
    for (int _ = 0; _ < t; _++) {
        cin >> vt >> vq >> vl;

        type = 1; gt = 0; gq = 0;

        while (vl > 1) {
            if (vt % vl && vq % vl) vl--;
            else if (vt % vl) {
                gq++;
                vq--;
            } else {
                gt++;
                vt--;
            }
        }

        cout << gt << " " << gq << '\n';
    }
}