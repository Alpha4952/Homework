#include <bits/stdc++.h>
using namespace std;

int n, f[5], d, r, cur1, cur2;
pair <int, int> a[100001];

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("PHOTO.inp", "r", stdin);
	freopen("PHOTO.out", "w", stdout);

	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;

	cur1 = 0; cur2 = 0; d = 1; r = 999999; f[a[0].second] = 1;
	while (cur1 <= cur2 && cur2 < n) {
		if (d < 3) {
			cur2++;
			if (f[a[cur2].second] == 0) d++;
			f[a[cur2].second]++;
		} else {
			r = min(r, a[cur2].first - a[cur1].first);
			if (f[a[cur1].second] == 1) d--;
			f[a[cur1++].second]--;
		}
	}
	cout << r;
}