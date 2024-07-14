#include <bits/stdc++.h>
using std::cin;
using std::cout;
using std::max;

long long n, matrix[10][10], maxv, maxv_lo, dirX[4], dirY[4];
std::string inp;

void wat(int direction, bool allLeft, long long point, int x, int y) {
    //for (int i = 0; i <= 9; i++) {
    //    for (int j = 0; j <= 9; j++) cout << matrix[i][j] << " ";
    //    cout << '\n';
    //} cout << '\n';
    if (matrix[y + dirY[direction]][x + dirX[direction]] == 0) {
        y += dirY[direction];
        x += dirX[direction];
        matrix[y][x] = 2;
        wat(direction, allLeft, point + 1, x, y);
        matrix[y][x] = 0;
    } else if (matrix[y + dirY[direction]][x + dirX[direction]] == 1) {
        if (matrix[y + dirY[(direction + 1) % 4]][x + dirX[(direction + 1) % 4]] == 0) wat((direction + 1) % 4, 0, point, x, y);
        else maxv = max(maxv, point);
        if (matrix[y + dirY[(direction + 3) % 4]][x + dirX[(direction + 3) % 4]] == 0) wat((direction + 3) % 4, allLeft, point, x, y);
        else {
            maxv = max(maxv, point);
            if (allLeft) maxv_lo = max(maxv_lo, point);
        }
    } else {
        maxv = max(maxv, point);
        if (allLeft) maxv_lo = max(maxv_lo, point);
    }
}

int main() {
    std::ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Snail.inp", "r", stdin);
    freopen("Snail.out", "w", stdout);

    for (int i = 1; i <= 8; i++) for (int j = 1; j <= 8; j++) matrix[i][j] = 0;
    for (int i = 0; i <= 9; i++) {
        matrix[0][i] = 1;
        matrix[9][i] = 1;
        matrix[i][0] = 1;
        matrix[i][9] = 1;
    }

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> inp;

        matrix[inp[1] - '0'][inp[0] - 'A' + 1] = 1;
    }

    //for (int i = 0; i <= 9; i++) {
    //    for (int j = 0; j <= 9; j++) cout << matrix[i][j] << " ";
    //    cout << '\n';
    //}

    dirX[0] = 1; dirX[1] = 0; dirX[2] = -1; dirX[3] = 0;
    dirY[0] = 0; dirY[1] = 1; dirY[2] = 0; dirY[3] = -1;

    matrix[1][1] = 2;

    wat(1, 1, 0, 1, 1);

    cout << maxv_lo << '\n' << maxv;
    return 0;
}