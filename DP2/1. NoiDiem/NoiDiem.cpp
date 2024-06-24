#include <bits/stdc++.h>
using namespace std;

long long n, arr[100001], dp[100001], maxl;
vector <int> movef, moves;

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("NoiDiem.inp", "r", stdin);
    freopen("NoiDiem.out", "w", stdout);

	cin >> n;
	fill(dp, dp+n, 1); maxl = 1;
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		for (int j = 0; j < i; j++) {
			if (arr[j] < arr[i]) {
				dp[i] = max(dp[i], dp[j]+1);
				maxl = max(maxl, dp[i]);
			}
		}
	}

    //for (int i = 0; i < n; i++) cout << dp[i] << " ";
    //cout << endl;

	cout << maxl << '\n';
    for (int i = n-1; i >= 0; i--) {
        if (dp[i] == maxl) {
            maxl--;

            movef.push_back(arr[i]);
            moves.push_back(i);
        }
    }

    for (int i = movef.size() - 1; i >= 0; i--) cout << movef[i] << " " << moves[i] + 1 << '\n';
    return 0;
}