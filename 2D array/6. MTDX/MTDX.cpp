#include <bits/stdc++.h>
using namespace std;

int n, a[100][100], l;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	freopen("MTDX.inp", "r", stdin);
	freopen("MTDX.out", "w", stdout);
	cin >> n;
	l = 1;

	for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> a[i][j];

	for (int i = 0; i < n; i++) for (int j = i + 1; j < n; j++) if (a[i][j] != a[j][i]) l = 0;

	if (l) {
		cout << "YES" << '\n';
		for (int i = 0; i < n; i++) {
			for (int j = 0; j <= i; j++) cout << a[i][j] << " ";
			cout << '\n';
		}
	}
	else {
		cout << "NO" << '\n';
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (j > i) cout << a[j][i] << " ";
				else cout << a[i][j] << " ";
			}
			cout << '\n';
		}
	}
}
    