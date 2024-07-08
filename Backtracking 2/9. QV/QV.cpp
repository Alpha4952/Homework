#include <bits/stdc++.h>
using namespace std;

int n, m, matrix[501][501], h[501][501], temp, dirX[4], dirY[4], diaX[4], diaY[4], c, s;
struct wathef {
    long long n, s;
} ehe;

void SeekThemOut(int y, int x) {
    //cout << y << " " << x << std::endl;
    matrix[y][x] = 0;

    s += max(h[y][x] - h[y - 1][x], 0);
    s += max(h[y][x] - h[y][x - 1], 0);
    s += max(h[y][x] - h[y + 1][x], 0);
    s += max(h[y][x] - h[y][x + 1], 0);

    //cout << y << " " << x << " " << s << '\n';

    for (int i = 0; i < 4; i++) {
        if (matrix[y + dirY[i]][x + dirX[i]] == 0) continue;

        matrix[y][x] = 0;

        SeekThemOut(y + dirY[i], x + dirX[i]);
    }

    return;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("QV.inp", "r", stdin);
    freopen("QV.out", "w", stdout);

    dirX[0] = 0; dirX[1] = 1; dirX[2] = 0; dirX[3] = -1;
    dirY[0] = 1; dirY[1] = 0; dirY[2] = -1; dirY[3] = 0;

    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> h[i][j];
            if (h[i][j]) matrix[i][j] = 1;
        }
    }

    for (int i = 0; i <= n + 1; i++) {
        matrix[i][0] = 0;
        matrix[i][m + 1] = 0;
        h[i][0] = 0;
        h[i][m + 1] = 0;
    }
    for (int j = 0; j <= m + 1; j++) {
        matrix[0][j] = 0;
        matrix[n + 1][j] = 0;
        h[0][j] = 0;
        h[n + 1][j] = 0;
    }

    c = 1; ehe.n = 0; ehe.s = 0; s = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (matrix[i][j]) {
                s = 0;
                SeekThemOut(i, j);
                if (s > ehe.s) {
                    ehe.n = c;
                    ehe.s = s;
                }
                c++;
            }
        }
    }
    
    cout << c-1 << '\n';
    cout << ehe.n << " " << ehe.s << endl;
    return 0;
}