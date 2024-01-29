#include <bits/stdc++.h>
using namespace std;

long long n, a1[100001][2], a2[100001][2], a3[100001][2], c1, c2, c3, t1, t2;

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> t1 >> t2;
		if (t2 == 1) {
			a1[c1][0] = t1;
			a1[c1][1] = t2;
			c1++;
		}
		else if (t2 == 2) {
			a2[c2][0] = t1;
			a2[c2][1] = t2;
			c2++;
		}
		else {
			a3[c3][0] = t1;
			a3[c3][1] = t2;
			c3++;
		}
	}

	for (int i = 0; i < n; i++) {

	}
}