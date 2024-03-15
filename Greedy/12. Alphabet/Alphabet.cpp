#include <bits/stdc++.h>
using namespace std;

long long tests, side, c;
string words = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", line;
char sq[30][30];

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Alphabet.inp", "r", stdin);
    freopen("Alphabet.out", "w", stdout);

    cin >> tests;
    for (int t = 1; t <= tests; t++) {
        cin >> side;

        for (int i = 1; i <= side; i++) {
            cin >> line;
            
            for (int h = 1; h <= side + 1; h++) {
                if (h == side + 1) {
                    sq[i][h] = 0;
                    continue;
                }
                sq[i][h] = line[h-1];
            }
        }
        for (int i = 1; i <= side + 1; i++) sq[side+1][i] = 0;

        cout << "Case " << t << ":\n";
        for (int i = 1; i <= side; i++) {
            for (int j = 1; j <= side; j++) {
                if (sq[i][j] != '.') {
                    cout << sq[i][j];
                    continue;
                }

                c = 0;

                while (words[c] == sq[i+1][j] || words[c] == sq[i-1][j] || words[c] == sq[i][j+1] || words[c] == sq[i][j-1]) c++;

                sq[i][j] = words[c];

                cout << sq[i][j];
            }
            cout << '\n';
        }
    }
}