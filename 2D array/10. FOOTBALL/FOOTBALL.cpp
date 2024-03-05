#include <bits/stdc++.h>
using namespace std;

int a[101][101], n, p[101], mp = -1, w[101], l[101];

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("FOOTBALL.inp", "r", stdin);
	freopen("FOOTBALL.out", "w", stdout);

	cin >> n;
	for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) {
		cin >> a[i][j];
		p[i] += a[i][j];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] == 3) w[i]++;
			else if (a[i][j] == 0) {
				if (i == j) continue;
				w[i]--;
				l[i] = 1;
			}
		}
		mp = max(mp, p[i]);
	}
	for (int i = 0; i < n; i++) if (p[i] == mp) cout << i+1 << " ";
	cout << '\n';
	for (int i = 0; i < n; i++) if (w[i] > 0) cout << i+1 << " ";
	cout << '\n';
	for (int i = 0; i < n; i++) if (l[i] == 0) cout << i+1 << " ";
}