#include <bits/stdc++.h>
using namespace std;

int n, a[100001], t1, t2, c;

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("CROSSROAD.inp", "r", stdin);
	freopen("CROSSROAD.out", "w", stdout);
	fill(a, a+100001, -1);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> t1 >> t2;
		if (a[t1] == -1) a[t1] = t2;
		else if (a[t1] != t2) {
			c++;
			a[t1] = t2;
		}
	}
	cout << c;
}