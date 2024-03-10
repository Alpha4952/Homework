#include <bits/stdc++.h>
using namespace std;

int c[1001], r[1001], m, n, p[1000001], t;

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("PRIMATR.inp", "r", stdin);
	freopen("PRIMATR.out", "w", stdout);

	p[0] = 1; p[1] = 1;
	for (int i = 2; i <= 1000; i++) if (p[i] == 0) for (int j = i*i; j <= 1000000; j += i) p[j] = 1;

	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> t;

			if (p[t] == 0) continue;

			for (int e = 1; e <= 1000000; e++) {
				if (p[e+t]) continue;

				c[j] += e;
				r[i] += e;
				break;
			}
		}
	}

	t = 99999;
	for (int i = 0; i < m; i++) t = min(t, r[i]);
	for (int i = 0; i < n; i++) t = min(t, c[i]);

	cout << t;
}