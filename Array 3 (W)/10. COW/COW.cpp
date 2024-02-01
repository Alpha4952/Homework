#include <bits/stdc++.h>
using namespace std;

long long n, d, m, maxm, cur1, cur2;
pair <long long, long long> a[100001];

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("COW.inp", "r", stdin);
	freopen("COW.out", "w", stdout);

	cin >> n >> d;
	for (int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;
	sort(a, a+n);
	cur1 = 0; cur2 = 1; m = a[0].second; maxm = a[0].second;
	while (cur1 <= cur2 && cur2 < n) {
		if (a[cur2].first - a[cur1].first <= d) {
			m += a[cur2].second;
			cur2++;
			maxm = max(maxm, m);
		} else {
			m -= a[cur1].second;
			cur1++;
		}
	}
	cout << maxm;
}