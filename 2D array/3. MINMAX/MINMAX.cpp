#include <bits/stdc++.h>
using namespace std;

int a[100][100], d, c, dn, cn, dl, cl, minv, maxv;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("MINMAX.inp", "r", stdin);
	freopen("MINMAX.out", "w", stdout);

	cin >> d >> c;
	minv = 2000000000;
	maxv = -2000000000;
	for (int i = 0; i < d; i++) {
		for (int j = 0; j < c; j++) {
			cin >> a[i][j];
			if (a[i][j] < minv) {
				minv = a[i][j];
				dn = i;
				cn = j;
			}
			if (a[i][j] > maxv) {
				maxv = a[i][j];
				dl = i;
				cl = j;
			}
		}
	}
	cout << minv << " " << dn + 1 << " " << cn + 1 << '\n' << maxv << " " << dl + 1 << " " << cl + 1;
}