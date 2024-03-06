#include <bits/stdc++.h>
using namespace std;

int m, n, k, a[501][501], ma, r[4];

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("WOOD.inp", "r", stdin);
	freopen("WOOD.out", "w", stdout);

	cin >> m >> n >> k;
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
			a[i][j] += a[i][j-1];
		}
	}
	for (int i = 1; i <= n; i++) for (int j = 1; j <= m; j++) a[j][i] += a[j-1][i];

	if (a[m][n] < k) {
		cout << -1;
		return 0;
	}

	ma = 260000;
	for (int by = 1; by <= m; by++) {
		for (int bx = 1; bx <= n; bx++) {
			for (int ty = 1; ty <= by; ty++) {
				for (int tx = 1; tx <= bx; tx++) {
					if (a[by][bx] - a[by][tx-1] - a[ty-1][bx] + a[ty-1][tx-1] >= k) {
						if (ma > (by-ty+1)*(bx-tx+1)) {
							ma = (by-ty+1)*(bx-tx+1);
							r[0] = tx; r[1] = ty; r[2] = bx; r[3] = by;
						}
					}
				}
			}
		}
	}
	//don't ask me why
	cout << ma << '\n' << r[0] << " " << r[1] << " " << r[2] << " " << r[3];
}