#include <bits/stdc++.h>
using std::cin;
using std::cout;

int n, matrix[50][50], temp, dirX[4], dirY[4], diaX[4], diaY[4], c, counter;
std::string line;

void SeekThemOut (int y, int x) {
    //cout << y << " " << x << std::endl;
    matrix[y][x] = 0;
    for (int i = 0; i < 4; i++) {
        if (matrix[y + dirY[i]][x + dirX[i]] == 0) continue;
        

        SeekThemOut(y + dirY[i], x + dirX[i]);
    }
    for (int i = 0; i < 4; i++) {
        if (matrix[y + diaY[i]][x + diaX[i]] == 0) continue;
        

        SeekThemOut(y + diaY[i], x + diaX[i]);
    }
    return;
}

int main() {
    std::ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    std::freopen("Images.inp", "r", stdin);
    std::freopen("Images.out", "w", stdout);

    dirX[0] = 0; dirX[1] = 1; dirX[2] = 0; dirX[3] = -1;
    dirY[0] = 1; dirY[1] = 0; dirY[2] = -1; dirY[3] = 0;

    diaX[0] = 1; diaX[1] = -1; diaX[2] = 1; diaX[3] = -1;
    diaY[0] = 1; diaY[1] = -1; diaY[2] = -1; diaY[3] = 1;

    counter = 1;
    while (cin >> n) {
        if (!n) break;
        for (int i = 1; i <= n; i++) {
            cin >> line;
            for (int j = 0; j < n; j++) {
                matrix[i][j + 1] = (line[j] - '0');
            }
        }

        for (int i = 0; i <= n + 1; i++) {
            matrix[i][0] = 0;
            matrix[i][n + 1] = 0;
        }
        for (int j = 0; j <= n + 1; j++) {
            matrix[0][j] = 0;
            matrix[n + 1][j] = 0;
        }

        c = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (matrix[i][j]) {
                    SeekThemOut(i, j);
                    c++;
                }
            }
        }

        cout << counter << " " << c << std::endl;
        counter++;
    }
    return 0;
}