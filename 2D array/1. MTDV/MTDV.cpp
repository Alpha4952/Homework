#include <bits/stdc++.h>
using namespace std;

int a[100][100], n, c0, l;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("MTDV.inp", "r", stdin);
	freopen("MTDV.out", "w", stdout);

	cin >> n;
	c0 = 0;
	l = 1;

	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) {
			cin >> a[i][k];
			if (i == k && a[i][k] != 1) l = 0;
			if (a[i][k] == 0) c0++;
		}
	}
	cout << l << '\n' << c0;
}