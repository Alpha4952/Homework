#include <bits/stdc++.h>
using namespace std;

int d, c, maxv, minv, a[100][100], b[100001], dma, dmi;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("BARR.inp", "r", stdin);
	freopen("BARR.out", "w", stdout);
	cin >> d >> c;
	maxv = -2000000000;
	minv = 2000000000;
	for (int i = 0; i < d; i++) {
		b[i] = 0;
		for (int j = 0; j < c; j++) {
			cin >> a[i][j];
			b[i] += a[i][j];
		}
		if (b[i] > maxv) {
			maxv = b[i];
			dma = i + 1;
		}
		if (b[i] < minv) {
			minv = b[i];
			dmi = i + 1;
		}
		cout << b[i] << " ";
	}
	cout << '\n' << dma << " " << dmi;
}
    