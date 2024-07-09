#include <bits/stdc++.h>
using std::cin;
using std::cout;

int prime[100001], m, n, matrix[22][22], temp, dirX[4], dirY[4], c;

void primu() {
    std::fill(prime, prime + 100001, 1);
    prime[0] = 0;
    prime[1] = 0;

    for (int i = 2; i <= 317; i++) {
        if (prime[i]) for (int j = i * i; j <= 100000; j += i) prime[j] = 0;
    }
}

void SeekThemOut (int y, int x) {
    //cout << y << " " << x << std::endl;
    matrix[y][x] = 0;
    for (int i = 0; i <= 4; i++) {
        if (i == 4) return; 
        if (matrix[y + dirY[i]][x + dirX[i]] != -1) continue;
        

        SeekThemOut(y + dirY[i], x + dirX[i]);
    }
    return;
}

int main() {
    std::ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    std::freopen("DemVung.inp", "r", stdin);
    std::freopen("DemVung.out", "w", stdout);

    primu();
    dirX[0] = 0; dirX[1] = 1; dirX[2] = 0; dirX[3] = -1;
    dirY[0] = 1; dirY[1] = 0; dirY[2] = -1; dirY[3] = 0;

    cin >> m >> n;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> temp;

            //if (prime[temp]) matrix[i][j] = 1;
            //else matrix[i][j] = 0;
            matrix[i][j] = prime[temp] ? -1 : temp;
            //matrix[i][j] = temp;
        }
    }

    for (int i = 0; i <= m + 1; i++) {
        matrix[i][0] = 0;
        matrix[i][n + 1] = 0;
    }
    for (int j = 0; j <= n + 1; j++) {
        matrix[0][j] = 0;
        matrix[m + 1][j] = 0;
    }


    c = 0;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (matrix[i][j] == -1) {
                SeekThemOut(i, j);
                c++;
            }
        }
    }
    cout << c << std::endl;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) cout << matrix[i][j] << " ";
        cout << '\n';
    }
    return 0;
}