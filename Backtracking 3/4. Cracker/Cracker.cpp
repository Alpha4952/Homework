#include <bits/stdc++.h>
using std::cin;
using std::cout;
using std::fill;
using std::max;

long long n, m, crack[11][1001], cracker[11][1001], clm[1001], move[20], maxv, temp;

void actuallyDoSmth() {
    fill(clm, clm + m + 1, 0);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (move[i]) cracker[i][j] = (crack[i][j]) ? 0 : 1;
            else cracker[i][j] = crack[i][j];

            if (cracker[i][j]) clm[j]++;
        }
    }

    temp = 0;

    for (int i = 1; i <= m; i++) temp += max(clm[i], n - clm[i]);

    maxv = max(maxv, temp);
}

void doSmth(int curl) {
    if (curl == n) {
        actuallyDoSmth();
        return;
    }

    move[curl + 1] = 1;
    doSmth(curl + 1);
    move[curl + 1] = 0;
    doSmth(curl + 1);
}

int main() {
    std::ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Cracker.inp", "r", stdin);
    freopen("Cracker.out", "w", stdout);
    
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> crack[i][j];
        }
    }

    maxv = 0;
    doSmth(0);

    cout << maxv << std::endl;
    return 0;
}