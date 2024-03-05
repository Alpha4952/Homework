#include <bits/stdc++.h>
using namespace std;

long long m, n, a[101][101], minv, maxv, minx, miny, maxx, maxy, minxa[101], maxxa[101], minva[101], maxva[101], result[2][101], r;

bool dc (int y, int x) {
	maxv = a[y][x];
	minv = a[y][x];

	for (int i = 0; i < m; i++) if (a[y][i] > maxv) return false;

	for (int i = 0; i < n; i++) if (a[i][x] < minv) return false;

	return true;
}

bool cd (int y, int x) {
	maxv = a[y][x];
	minv = a[y][x];

	for (int i = 0; i < m; i++) if (a[y][i] < minv) return false;

	for (int i = 0; i < n; i++) if (a[i][x] > maxv) return false;
	
	return true;
}

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("YENNGUA.inp", "r", stdin);
	freopen("YENNGUA.out", "w", stdout);
	cin >> n >> m;

	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> a[i][j];
	
	for (int i = n-1; i >= 0; i--) for (int j = m-1; j >= 0; j--) if (dc(i, j) || cd(i, j)) cout << i+1 << " " << j+1 << '\n';
}
