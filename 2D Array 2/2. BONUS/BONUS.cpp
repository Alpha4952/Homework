#include <bits/stdc++.h>
using namespace std;

int arr[1001][1001], n, k, maxv;

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("BONUS.inp", "r", stdin);
	freopen("BONUS.out", "w", stdout);

	cin >> n >> k;
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> arr[i][j];
			arr[i][j] += arr[i][j-1];
		}
	}
	for (int i = 1; i <= n; i++) for (int j = 1; j <= n; j++) arr[j][i] += arr[j-1][i];

	maxv = -1;
	for (int i = k; i <= n; i++) {
		for (int j = k; j <= n; j++) {
			maxv = max(maxv, arr[i][j] - arr[i-k][j] - (arr[i][j-k] - arr[i-k][j-k]));
		}
	}

	cout << maxv;
}