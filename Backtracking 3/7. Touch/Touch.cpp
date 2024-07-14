#include <bits/stdc++.h>
using namespace std;

long long n, gold[20][20];
string inp;

void midas(int y, int x) {
    gold[y][x] = (gold[y][x]) ? 1:0;
    if (y > 1) gold[y - 1][x] = (gold[y - 1][x]) ? 1:0;
    if (y < n) gold[y + 1][x] = (gold[y + 1][x]) ? 1:0;

    if (x > 1) gold[y][x - 1] = (gold[y][x - 1]) ? 1:0;
    if (x < n) gold[y][x + 1] = (gold[y][x + 1]) ? 1:0;
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

    
}