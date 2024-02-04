#include <bits/stdc++.h>
using namespace std;

int x, y, n, x1, y1, c;
string s;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("SPY.inp", "r", stdin);
	freopen("SPY.out", "w", stdout);
	
	cin >> x >> y >> n >> s;
	x1 = 0; y1 = 0; c = 0;

	for (int i = 0; i <= n; i++) {
		if ((x1 == x || x1 - 1 == x || x1 + 1 == x) && (y1 == y || y1 - 1 == y || y1 + 1 == y)) {
			if (c > 0) cout << '\n';
			cout << i;
			c++;
		}
		x1 = x1 + 1*(s[i] == 'R') - 1*(s[i] == 'L');
		y1 = y1 + 1*(s[i] == 'U') - 1*(s[i] == 'D');
	}
	
	if (c == 0) cout << -1;
}