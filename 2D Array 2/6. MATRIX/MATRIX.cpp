#include <bits/stdc++.h>
using namespace std;

long long m, n, a[1001][1001], maxv;

long long summing (long long fx, long long fy, long long ex, long long ey) {
	return a[ey][ex] - a[fy-1][ex] - (a[ey][fx-1] - a[fy-1][fx-1]);
}

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("MATRIX.inp", "r", stdin);
	freopen("MATRIX.out", "w", stdout);

	cin >> m >> n;

	for (long long i = 1; i <= m; i++) {
		for (long long j = 1; j <= n; j++) {
			cin >> a[i][j];
			a[i][j] += a[i][j-1];
		}
	}
	for (long long i = 1; i <= n; i++) for (long long j = 1; j <= m; j++) a[j][i] += a[j-1][i];
	
	maxv = a[m][n];
	for (long long i = 1; i <= m; i++) {
		for (long long j = 1; j <= n; j++) {
			for (long long i1 = 1; i1 < i; i1++) {
				for (long long j1 = 1; j1 < j; j1++) maxv = max(maxv, summing(j1, i1, j, i));
			}
		}
	}
	cout << maxv;
}