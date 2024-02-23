#include <bits/stdc++.h>
using namespace std;

long long n, a[1000001], lim, c, t;

bool pri (long long n) {
	if (n < 2) return false;
	if (n < 4) return false;
	if (n%2 == 0) return false;
	for (int i = 3; i*i <= n; i += 2) if (n%i == 0) return false;
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

	lim = sqrt(n)+1;

	a[0] = 1; a[1] = 1;
	for (long long i = 2; i*i <= lim; i++) {
		if (a[i]) continue;

		for (long long j = i*i; j <= lim; j += i) a[j] = 1;
	}

	for (int i = 1; i <= lim; i++) {
		if (a[i] == 0) {
			if (n%i == 0) {
				t = n/i;
				if (pri(t) == false) c++;
			}
			continue;
		}
		
		if (n%i == 0) {
			c++;
			t = n/i;
			if (n%(t) == 0 && t != i) {
				if (pri(t) == false) c++;
			}
		}
	}
	cout << c;
}