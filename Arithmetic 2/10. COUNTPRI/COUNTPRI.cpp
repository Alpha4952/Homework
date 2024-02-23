#include <bits/stdc++.h>
using namespace std;

long long m, l, r, arr[1000001], arr2[1000001], c, t;

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("COUNTPRI.inp", "r", stdin);
	freopen("COUNTPRI.out", "w", stdout);
	arr[0] = 1; arr[1] = 1;

	for (int i = 2; i < 1001; i++) if (arr[i] == 0) for (int j = i*i; j < 1000001; j+= i) arr[j] = 1;

	for (int i = 0; i < 1000001; i++) {
		arr2[i] = t;
		if (arr[i] == 0) t++;
	}
	cin >> m;

	for (int i = 0; i < m; i++) {
		cin >> l >> r;
		if (l == r && arr[l] == 0) cout << 1 << '\n';
		else if (arr[r] == 0) cout << arr2[r] - arr2[l] + 1 << '\n';
		else cout << arr2[r] - arr2[l]<< '\n';
	}
}