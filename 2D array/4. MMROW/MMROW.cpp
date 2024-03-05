#include <bits/stdc++.h>
using namespace std;

int d, c, minv, maxv, a[100][100], cmin, cmax;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("MMROW.inp", "r", stdin);
	freopen("MMROW.out", "w", stdout);
	cin >> d >> c;

	for (int i = 0; i < d; i++) {
		maxv = -2000000000;
		minv = 2000000000;
		for (int j = 0; j < c; j++) {
			cin >> a[i][j];
			if (a[i][j] < minv) {
				minv = a[i][j];
				cmin = j;
			}
			if (a[i][j] > maxv) {
				maxv = a[i][j];
				cmax = j;
			}
		}
		if (i > 0) cout << '\n';
		cout << minv << " " << cmin + 1 << " " << maxv << " " << cmax + 1;
	}
}