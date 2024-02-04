#include <bits/stdc++.h>
using namespace std;

long long m, n, a[200002], r1=1, r2, c;

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	cin >> m >> n;
	for (int i = 0; i < m+n; i++) cin >> a[i];
	sort(a, a+m+n);
	for (int i = 1; i < m+n; i++) {
		if (a[i] == a[i-1]) {
			r2++;
			r1--;
		}
		r1++;
	}
	cout << r1 << " " << r2;
}