#include <bits/stdc++.h>
using namespace std;

long long m, n, a[100001], fa[100001], b[100001], fb[100001], r1=1, r2, ca, cb, cur1, cur2;

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	cin >> m >> n;
	for (int i = 0; i < m; i++) cin >> a[i];
	sort(a, a+m);
	fa[0] = a[0]; ca = 1;
	for (int i = 1; i < m; i++) if (a[i] != a[i-1]) {fa[ca] = a[i]; ca++;}
	for (int i = 0; i < n; i++) cin >> b[i];
	sort(b, b+n);
	fb[0] = b[0]; cb = 1;
	for (int i = 1; i < n; i++) if (b[i] != b[i-1]) {fb[cb] = b[i]; cb++;}

	cur1 = 0; cur2 = 0;
	while (cur1 < ca && cur2 < cb) {
		if (fa[cur1] == fb[cur2]) {
			r2++;
			r1 += 2;
			cur1++;
			cur2++;
		}
		else if (fa[cur1] < fb[cur2]) {r1++; cur1++;}
		else {r1++; cur2++;}
	}
	cout << ca+cb-r2 << " " << r2;
}