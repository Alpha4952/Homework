#include <bits/stdc++.h>
using namespace std;

long long n, s, a[1000001];

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("WOOD.inp", "r", stdin);
	freopen("WOOD.out", "w", stdout);
	
	cin >> n >> s;
	a[0] = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (i) a[i] += a[i-1];
	}

	for (int l = 1; l < n; l++) {
		for (int cur = 0; cur < n-l; cur++) {
			if (a[cur+l] - a[cur] >= s) {
				cout << l;
				l = n;
				break;
			}
		}
	}
}