#include <bits/stdc++.h>
using namespace std;

long long n, a[500001], b, c, t, p[500001];

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("SUBARR.inp", "r", stdin);
	freopen("SUBARR.out", "w", stdout);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b += a[i];
	}

	if (b % 3) {
		cout << 0;
		return 0;
	}
	b /= 3;

	t = 0;
	for (int i = 0; i < n-2; i++) {
		t += a[i];
		if (t == b) p[i] = 1;
		else p[i] = 0;
		if (i) p[i] += p[i-1];
	}

	t = 0;
	for (int i = n-1; i >= 2; i--) {
		t += a[i];
		if (t == b) c += p[i-2];
	}

	cout << c;
}