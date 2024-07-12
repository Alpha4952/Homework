#include <bits/stdc++.h>
using std::cin;
using std::cout;

long long clocks[9], ch[9][9], moves[100001], clone[100001], m, mm[100001];

void check() {
    int countr = 0;

    for (int i = 0; i < 9; i++) clone[i] = clocks[i];

    for (int i = 0; i < 9; i++) {
        if (moves[i]) {
            countr += moves[i];
            for (int j = 0; j < 9; j++) {
                clone[j] += moves[i] * ch[i][j];
            }
        }
    }

    int eh = 1;
    for (int i = 0; i < 9; i++) {
        clone[i] %= 4;
        if (clone[i] != 0) eh = 0;
    }

    if (eh && countr < m) {
        m = countr;
        for (int i = 0; i < 9; i++) {
            mm[i] = moves[i];
        }
    }
}

void generate(int iterator) {
    if (iterator == 9) {
        check();
        return;
    }

    for (int i = 0; i < 4; i++) {
        moves[iterator] = i;
        generate(iterator + 1);
    }
}

int main() {
    std::ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Clock.inp", "r", stdin);
    freopen("Clock.out", "w", stdout);

    for (int i = 0; i < 9; i++) cin >> clocks[i];

    //for (int i = 0; i < 9; i++) {
    //    for (int i = 0; i < 9; i++) cout << "ch[0][" << i << "] = 0; ";
    //    cout << '\n';
    //}

    ch[0][0] = 1; ch[0][1] = 1; ch[0][2] = 0; ch[0][3] = 1; ch[0][4] = 1; ch[0][5] = 0; ch[0][6] = 0; ch[0][7] = 0; ch[0][8] = 0;
    ch[1][0] = 1; ch[1][1] = 1; ch[1][2] = 1; ch[1][3] = 0; ch[1][4] = 0; ch[1][5] = 0; ch[1][6] = 0; ch[1][7] = 0; ch[1][8] = 0;
    ch[2][0] = 0; ch[2][1] = 1; ch[2][2] = 1; ch[2][3] = 0; ch[2][4] = 1; ch[2][5] = 1; ch[2][6] = 0; ch[2][7] = 0; ch[2][8] = 0;
    ch[3][0] = 1; ch[3][1] = 0; ch[3][2] = 0; ch[3][3] = 1; ch[3][4] = 0; ch[3][5] = 0; ch[3][6] = 1; ch[3][7] = 0; ch[3][8] = 0;
    ch[4][0] = 0; ch[4][1] = 1; ch[4][2] = 0; ch[4][3] = 1; ch[4][4] = 1; ch[4][5] = 1; ch[4][6] = 0; ch[4][7] = 1; ch[4][8] = 0;
    ch[5][0] = 0; ch[5][1] = 0; ch[5][2] = 1; ch[5][3] = 0; ch[5][4] = 0; ch[5][5] = 1; ch[5][6] = 0; ch[5][7] = 0; ch[5][8] = 1;
    ch[6][0] = 0; ch[6][1] = 0; ch[6][2] = 0; ch[6][3] = 1; ch[6][4] = 1; ch[6][5] = 0; ch[6][6] = 1; ch[6][7] = 1; ch[6][8] = 0;
    ch[7][0] = 0; ch[7][1] = 0; ch[7][2] = 0; ch[7][3] = 0; ch[7][4] = 0; ch[7][5] = 0; ch[7][6] = 1; ch[7][7] = 1; ch[7][8] = 1;
    ch[8][0] = 0; ch[8][1] = 0; ch[8][2] = 0; ch[8][3] = 0; ch[8][4] = 1; ch[8][5] = 1; ch[8][6] = 0; ch[8][7] = 1; ch[8][8] = 1;

    std::fill(moves, moves + 9, 0);
    m = 1e6;
    generate(0);

    cout << m << '\n';
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < mm[i]; j++) cout << i + 1 << " ";
    }

    return 0;
}