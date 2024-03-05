#include <bits/stdc++.h>
using namespace std;

int d, c, minv, maxv, a[100][100], dmin, dmax;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("MMCOL.inp", "r", stdin);
	//freopen("MINMAX.inp", "r", stdin);
	freopen("MMCOL.out", "w", stdout);
	//freopen("MINMAX.out", "w", stdout);
	cin >> d >> c;

	for (int i = 0; i < d; i++) {
		for (int j = 0; j < c; j++) cin >> a[i][j];
	}

	for (int i = 0; i < c; i++) {
		minv = 2000000000;
		maxv = -2000000000;
		for (int j = 0; j < d; j++) {
			if (a[j][i] > maxv) {
				maxv = a[j][i];
				dmax = j;

			}
			if (a[j][i] < minv) {
				minv = a[j][i];
				dmin = j;
			}
		}
		if (i > 0) cout << '\n';
		cout << minv << " " << dmin + 1 << " " << maxv << " " << dmax + 1;
	}
}