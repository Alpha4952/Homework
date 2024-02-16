#include <bits/stdc++.h>
using namespace std;

int n, a[1001], b[1001], t;

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> t;
		a[t]++;
		b[t]++;
	}
	sort(a, a+1001);
	for (int i = 0; i < 1001; i++) if (b[i] == a[1000]) cout << i << '\n';
}