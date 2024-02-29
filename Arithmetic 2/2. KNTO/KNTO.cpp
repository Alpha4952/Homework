#include <bits/stdc++.h>
using namespace std;

long long n, a[10000001], lim, c, t;

bool pri (int n) {
	if (n < 2) return false;
	if (n < 4) return true;
	if (n % 2 == 0) return false;
	for (int i = 3; i*i <= n; i+=2) if (n % i == 0) return false;
	return true;
}

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("KNTO.inp", "r", stdin);
	freopen("KNTO.out", "w", stdout);

	cin >> n;

	if (n <= 0) {
		cout << 0;
		return 1;
	}
	if (n == 1) {
		cout << 1;
		return 1;
	}
	if (pri(n)) {
		cout << 1;
		return 1;
	}

	lim = sqrt(n)+1;

	a[0] = 1; a[1] = 1;
	for (long long i = 2; i*i <= lim; i++) {
		if (a[i]) continue;

		for (long long j = i*i; j <= lim; j += i) a[j] = 1;
	}
	
	c = 2;
	for (int i = 2; i < n; i++) {
		if (n%i == 0) {
			if (a[i])c++;
			if (pri(n/i) == false) c++;
		}
	}
	cout << c;
}