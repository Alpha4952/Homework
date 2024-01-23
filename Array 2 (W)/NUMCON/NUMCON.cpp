#include <bits/stdc++.h>
using namespace std;

long long c, s;
string r, a[100001], t;

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	//freopen("NUMCON.inp", "r", stdin);
	//freopen("NUMCON.out", "w", stdout);

	c = 0;
	while (cin >> a[c]) c++;
	s = 1;
	while (s) {
		s = 0;
		for (int i = 0; i < c-1; i++) {
			if (a[i] + a[i+1] < a[i+1] + a[i]) {
				s = 1;
				t = a[i]; a[i] = a[i+1]; a[i+1] = t;
			}
		}
	}
	t = "";
	for (int i = 0; i < c; i++) t += a[i];
	cout << t;
}