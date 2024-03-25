#include <bits/stdc++.h>
using namespace std;

int m, n, r, c, x[101][101], a[101][101], res;
char ch;

void paint(int row, int colum, int sizerow, int sizecolum) {
    for (int i = row; i <= row + sizerow - 1; i++)
        for (int j = colum; j <= colum + sizecolum - 1; j++)
            x[i][j] = 1 - x[i][j];
}

bool check() {
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            if (a[i][j] != x[i][j])
                return 0;
    return 1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("Paint.inp", "r", stdin);
    freopen("Paint.out", "w", stdout);

    while (1) {
        cin >> m >> n >> r >> c;

        if (m == 0 && n == 0 && r == 0 && c == 0)
            break;

        memset(x, 0, sizeof(x));

        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                cin >> ch;
                a[i][j] = ch - '0';
            }
        }

        res = 0;
        for (int i = 1; i <= m - r + 1; i++) {
            for (int j = 1; j <= n - c + 1; j++) {
                if (x[i][j] != a[i][j]) {
                    res++;
                    paint(i, j, r, c);
                }
            }
        }

        if (check())
            cout << res << '\n';
        else
            cout << -1 << '\n';
    }
    return 0;
}
