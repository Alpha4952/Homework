#include <bits/stdc++.h>
using namespace std;

long long n, m, farm[251][251], totalWolfs, totalSheeps, wolfs, sheeps, dirX[4], dirY[4];
char s;

void HUNT(int y, int x) {
    farm[y][x] = 0;
    //cout << y << " " << x << " " << s << '\n';

    for (int i = 0; i < 4; i++) {
        if (farm[y + dirY[i]][x + dirX[i]] == 0) continue;

        if (farm[y + dirY[i]][x + dirX[i]] == 3) wolfs++;
        else if (farm[y + dirY[i]][x + dirX[i]] == 4) sheeps++;
        HUNT(y + dirY[i], x + dirX[i]);
    }

    return;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("SoiCuu.inp", "r", stdin);
    freopen("SoiCuu.out", "w", stdout);
    
    dirX[0] = 0; dirX[1] = 1; dirX[2] = 0; dirX[3] = -1;
    dirY[0] = 1; dirY[1] = 0; dirY[2] = -1; dirY[3] = 0;
    totalWolfs = 0; totalSheeps = 0;

    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> s;
            farm[i][j] = (s == '.') ? 1 : (s == '#') ? 0 : (s == 'v') ? 3 : 4;
            
            if (s == 'v') totalWolfs++;
            if (s == 'o') totalSheeps++;
        }
    }

    for (int i = 0; i <= n + 1; i++) {
        farm[i][0] = 0;
        farm[i][m + 1] = 0;
    }
    for (int i = 0; i <= m + 1; i++) {
        farm[0][i] = 0;
        farm[n + 1][i] = 0;
    }

    

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            wolfs = 0; sheeps = 0;
            if (farm[i][j] == 3) wolfs++;
            else if (farm[i][j] == 4) sheeps++;
            
            HUNT(i, j);
            
            if (sheeps > wolfs) totalWolfs -= wolfs;
            else totalSheeps -= sheeps;
        }
    }

    cout << totalSheeps << " " << totalWolfs << endl;
    return 0;
}