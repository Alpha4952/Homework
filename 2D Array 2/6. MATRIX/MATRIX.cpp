#include <bits/stdc++.h>
using namespace std;

int n, m, a[501][501], res = -99999, t[501];

int heh (int *a){
	int m = 0, r = 0;

	for(int i = 0; i < n; i++){
		m += a[i];
		r = max(r, m);
		m = max(0, m);
	}
	return r;
}

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("MATRIX.inp", "r", stdin);
    freopen("MATRIX.out", "w", stdout);

    cin >> n >> m;

	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> a[i][j];

	for (int l = 0; l < m; l++){
        memset(t, 0, sizeof(t));

		for (int r = l; r < m; r++){
			for (int i = 0; i < n; i++) t[i] += a[i][r];
			res = max(res, heh(t));
		}
	}
	cout << res;
}
