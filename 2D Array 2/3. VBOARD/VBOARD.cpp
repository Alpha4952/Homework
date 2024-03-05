#include <bits/stdc++.h>
using namespace std;

int white[501][501], black[501][501], n, q, tlx, tly, brx, bry;

int main () {
	ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
	freopen("VbOARD.inp", "r", stdin);
	freopen("VbOARD.out", "w", stdout);

	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i%2 == j%2) cin >> white[i][j];
			else cin >> black[i][j];
			white[i][j] += white[i][j-1];
			black[i][j] += black[i][j-1];
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			white[j][i] += white[j-1][i];
			black[j][i] += black[j-1][i];
		}
	}

	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> tly >> tlx >> bry >> brx;
		cout << abs((white[bry][brx] - white[tly-1][brx] - (white[bry][tlx-1] - white[tly-1][tlx-1])) - (black[bry][brx] - black[tly-1][brx] - (black[bry][tlx-1] - black[tly-1][tlx-1]))) << '\n';
	}
}