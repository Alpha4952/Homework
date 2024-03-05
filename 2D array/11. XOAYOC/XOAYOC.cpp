#include <bits/stdc++.h>
using namespace std;

int arr[101][101], m, n, mode, i, j, c, t, d, l, r;

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("XOAYOC.inp", "r", stdin);
	freopen("XOAYOC.out", "w", stdout);

	cin >> m >> n;

	if (m == 0 || n == 0) {
		return 0;
	}
	else if (m == 1) {
		for (int i = 1; i <= n; i++) cout << i << " ";
	}
	else if (n == 1) {
		for (int i = 1; i <= m; i++) cout << i << '\n';
	}
	else {
		mode = 1; i = 0; j = 0; c = 1; t = 0; d = 0; l = 0; r = 0;
		while (t + d < m && l + r < n) {
			while (mode == 1) {
				if (j == n-r-1) {
					mode = 2;
					t++;
					break;
				}
				if (arr[i][j+1] != 0) {
					mode = 2;
					t++;
					break;
				}
				arr[i][j] = c;
				j++;
				c++;
			}
	
			while (mode == 2) {
				if (i == m-d-1) {
					mode = 3;
					r++;
					break;
				}
				if (arr[i+1][j] != 0) {
					mode = 3;
					r++;
					break;
				}
				arr[i][j] = c;
				i++;
				c++;
			}
	
			while (mode == 3) {
				if (j == l) {
					mode = 4;
					d++;
					break;
				}
				if (arr[i][j-1] != 0) {
					mode = 4;
					d++;
					break;
				}
				arr[i][j] = c;
				j--;
				c++;
			}
	
			while (mode == 4) {
				if (i == t) {
					mode = 1;
					l++;
					break;
				}
				if (arr[i-1][j] != 0) {
					mode = 1;
					l++;
					break;
				}
				arr[i][j] = c;
				i--;
				c++;
			}
		}
		arr[i][j] = c;
		
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) cout << arr[i][j] << " ";
			cout << '\n';
		}
	}
}