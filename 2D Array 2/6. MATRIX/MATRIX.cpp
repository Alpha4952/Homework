#include <bits/stdc++.h>
using namespace std;

long long n, m, a[501][501], res, t[501];

long long heh (long long *a) {
	long long m = 0, r = res;

	for (long long i = 0; i < n; i++) {
		m += a[i];
		r = max(r, m);
		m = max(0LL, m);
	}
	return r;
}

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("MATRIX.inp", "r", stdin);
    freopen("MATRIX.out", "w", stdout);

    cin >> n >> m;

	for (long long i = 0; i < n; i++) {
		for (long long j = 0; j < m; j++) {
			cin >> a[i][j];
			a[i][j] += a[i][j-1];
		}
		res += a[i][m-1];
	}

	for (long long l = 0; l < m; l++) {
        memset(t, 0, sizeof(t));

		for (long long i = 0; i < n; i++) {
			t[i] += a[i][m-1] - a[i][l-1];
			res = max(res, heh(t));
		}
	}
	cout << res;
}
