#include <bits/stdc++.h>
using namespace std;

long long t, n, a[3], b[3], mirror[3], moves[3], h, r;
double hmm;
string megatron;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("RPS.inp", "r", stdin);
    freopen("RPS.out", "w", stdout);

    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < 3; i++) cin >> a[i];
        cin >> megatron;

        hmm = (float) n/2;

        r = 0;
        fill(b, b + 3, 0);

        for (int i = 0; i < n; i++) {
            if (megatron[i] == 'R') {
                b[0]++;
            } else if (megatron[i] == 'P') {
                b[1]++;
            } else if (megatron[i] == 'S') {
                b[2]++;
            }
        }
        for (int i = 0; i < 3; i++) mirror[i] = a[i];

        if (a[0] >= b[2]) {
            r += b[2];
            moves[0] = b[2];
            a[0] -= b[2];
            b[2] = 0;
        } else {
            r += a[0];
            moves[0] = a[0];
            b[2] -= a[0];
            a[0] = 0;
        }
        if (a[1] >= b[0]) {
            r += b[0];
            moves[1] = b[0];
            a[1] -= b[0];
            b[0] = 0;
        } else {
            r += a[1];
            moves[1] = a[1];
            b[0] -= a[1];
            a[1] = 0;
        }
        if (a[2] >= b[1]) {
            r += b[1];
            moves[2] = b[1];
            a[2] -= b[1];
            b[1] = 0;
        } else {
            r += a[2];
            moves[2] = a[2];
            b[1] -= a[2];
            a[2] = 0;
        }

        if (r >= hmm) {
            cout << "YES" << '\n';

            //cout << megatron.length() << " " << megatron << '\n';
            for (int i = 0; i < megatron.length(); i++) {
                if (megatron[i] == 'R') {
                    if (mirror[1]) {
                        cout << "P";
                        mirror[1]--;
                        moves[1]--;
                    } else if (mirror[0] && mirror[0] > moves[0]) {
                        mirror[0]--;
                        cout << "R";
                    } else {
                        cout << "S";
                        mirror[2]--;
                    }
                } else if (megatron[i] == 'P') {
                    if (mirror[2]) {
                        cout << "S";
                        mirror[2]--;
                        moves[2]--;
                    } else if (mirror[1] && mirror[1] > moves[1]) {
                        mirror[1]--;
                        cout << "P";
                    } else {
                        cout << "R";
                        mirror[0]--;
                    }
                } else if (megatron[i] == 'S') {
                    if (mirror[0]) {
                        cout << "R";
                        mirror[0]--;
                        moves[0]--;
                    } else if (mirror[2] && mirror[2] > moves[2]) {
                        cout << "S";
                        mirror[2]--;
                    } else {
                        cout << "P";
                        mirror[1]--;
                    }
                }
            }

            cout << '\n';
        } else cout << "NO" << '\n';
    }
}