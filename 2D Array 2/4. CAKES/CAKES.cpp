#include <bits/stdc++.h>
using namespace std;

long long m, n, a[1001][1001], smin, tl, tr, bl, br;

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("CAKES.inp", "r", stdin);
	freopen("CAKES.out", "w", stdout);

	cin >> m >> n;

	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
			a[i][j] += a[i][j-1];
		}
	}
	for (int i = 1; i <= n; i++) for (int j = 1; j <= m; j++) a[j][i] += a[j-1][i];

	if (m > 1 && n > 1) smin = 999999;
	for (int i = 1; i < m; i++) {
		for (int j = 1; j < n; j++) {
			tl = a[i][j];
			bl = a[m][j] - tl;
			tr = a[i][n] - tl;
			br = a[m][n] - tr - bl - tl;
			smin = min(smin, max(max(tl, bl), max(tr, br)) - min(min(tl, bl), min(tr, br)));
		}
	}

	cout << smin;
}