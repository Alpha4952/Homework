#include <bits/stdc++.h>
using std::cin;
using std::cout;

int m, n, a[16][16], movex[10001], movey[10001], moves, dirx[4] = {0, 1, 0, -1}, diry[4] = {1, 0, -1, 0}, x, y, tempx[100001], tempy[100001], ex = 0;

void bktrk(int px, int py, int lm, int mo) {
    if (ex) return;
    if (a[py][px]) return;

    if (px == 1 || py == 1 || px == n || py == m) {
        if (mo >= moves) return;

        moves = mo;
        for (int i = 0; i < mo; i++) movex[i] = tempx[i];
        for (int i = 0; i < mo; i++) movey[i] = tempy[i];

        return;
    }

    if (a[py + 1][px] && a[py - 1][px] && a[py][px + 1] && a[py][px - 1]) {
        return;
    }

    for (int i = 0; i < 4; i++) {
        if ((i + 2) % 4 == lm) continue;

        tempx[mo] = px + dirx[i];
        tempy[mo] = py + diry[i];
        a[py][px] = 1;
        bktrk(px + dirx[i], py + diry[i], i, mo + 1);
        
        a[py][px] = 0;
    }
}

int main() {
    std::ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Maze.inp", "r", stdin);
    freopen("Maze.out", "w", stdout);

    cin >> m >> n;
    for (int y = 1; y <= m; y++) for (int x = 1; x <= n; x++) cin >> a[y][x];
    cin >> y >> x;

    moves = 1e6;
    bktrk(x, y, -1, 0);

    if (moves == 1e6) {
        cout << -1;
        return 0;
    }
    cout << moves << '\n';
    for (int i = 0; i < moves; i++) cout << movey[i] << " " << movex[i] << '\n';

    return 0;
}