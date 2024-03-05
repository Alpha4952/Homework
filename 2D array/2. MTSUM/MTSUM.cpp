#include <bits/stdc++.h>
using namespace std;

int m, n, ta, td, tam, tc, tl, a[100001];

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("MTSUM.inp", "r", stdin);
	freopen("MTSUM.out", "w", stdout);
	cin >> m >> n;

	for (int i = 0; i < m*n; i++) {
		cin >> a[i];
		ta += a[i];
		td += a[i]*(a[i] > 0);
		tam += a[i]*(a[i] < 0);
		tc += a[i]*(abs(a[i]%2) == 0);
		tl += a[i]*(abs(a[i]%2));
	}
	cout << ta << '\n' << td << '\n' << tam << '\n' << tc << '\n' << tl;
}