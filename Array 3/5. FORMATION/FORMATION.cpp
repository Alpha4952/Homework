#include <bits/stdc++.h>
using namespace std;

long long n, m, r[1000001], l[1000001], k, c1, c2;

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("FORMATION.inp", "r", stdin);
	freopen("FORMATION.out", "w", stdout);
	cin >> n >> m;

	fill(r, r+n+1, 0);
	fill(l, l+n+1, 0);

	for (int i = 0; i < m; i++) {
		cin >> k;

		if (k == 1) {
			cin >> c1 >> c2;
			l[c1] = l[c2];
			r[c1] = c2;	
	    	r[l[c2]] = c1;
	    	l[c2] = c1;
		}
		else if (k == 2) {
			cin >> c1 >> c2;
		    l[c1] = c2;
		    r[c1] = r[c2];
		    l[r[c2]] = c1;
		    r[c2] = c1;
		}
		else if (k == 3) {
			cin >> c1;
		    r[l[c1]] = r[c1];
		    l[r[c1]] = l[c1];
		}
		else {
			cin >> c1;
    		cout << l[c1] << " " << r[c1] << '\n';
		}
	}
}