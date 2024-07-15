#include <bits/stdc++.h>
using namespace std;

long long n, gold[20][20], golden[20][20], moves[20], minv;
string inp;
vector <long long> wat[20];

void midas(int y, int x) {
    golden[y][x] = (golden[y][x]) ? 0:1;
    if (y > 1) golden[y - 1][x] = (golden[y - 1][x]) ? 0:1;
    if (y < n) golden[y + 1][x] = (golden[y + 1][x]) ? 0:1;

    if (x > 1) golden[y][x - 1] = (golden[y][x - 1]) ? 0:1;
    if (x < n) golden[y][x + 1] = (golden[y][x + 1]) ? 0:1;
}

void copy() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) golden[i][j] = gold[i][j];
    }
}

void make1() {
    copy();

    long long c = 0;

    for (int i = 1; i <= n; i++) {
        if (moves[i]) {
            midas(1, i);
            c++;
        }
    }

    if (n > 1) {
        for (int i = 2; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (!golden[i-1][j]) {
                    midas(i, j);
                    c++;
                }
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        if (!golden[n][i]) return;
    }

    minv = min(minv, c);
}

void make0() {
    copy();

    long long c = 0;

    for (int i = 1; i <= n; i++) {
        if (moves[i]) {
            midas(1, i);
            c++;
        }
    }

    if (n > 1) {
        for (int i = 2; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (golden[i-1][j]) {
                    midas(i, j);
                    c++;
                }
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        if (golden[n][i]) return;
    }

    minv = min(minv, c);
}

void doSmth() {
    make1();
    make0();
}

void generate(int crl) {
    if (crl == n) {
        doSmth();
        return;
    }

    moves[crl + 1] = 1;
    generate(crl + 1);
    moves[crl + 1] = 0;
    generate(crl + 1);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Touch.inp", "r", stdin);
    freopen("Touch.out", "w", stdout);
    
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> inp;
        for (int j = 1; j <= n; j++) gold[i][j] = inp[j-1] - '0';
    }

    //for (int i = 1; i <= n; i++) {
    //    for (int j = 1; j <= n; j++) cout << gold[i][j] << " ";
    //    cout << '\n';
    //}

    fill(moves, moves + n + 1, 0);

    minv = 1e7;
    generate(0);

    if (minv != 1e7) cout << minv;
    else cout << -1;
}