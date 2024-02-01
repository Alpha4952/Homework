#include <bits/stdc++.h>
using namespace std;

long long a, b, n, k, x;

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("SHUFFLE.inp", "r", stdin);
	freopen("SHUFFLE.out", "w", stdout);
	long long next[100001], pre[100001];

	cin >> n >> k;
	for (int i = 1; i <= n+1; i++) {
		pre[i] = i-1;
		next[i] = i+1;
	}
	next[0] = 1;
	for (int i = 1; i <= k; i++) {
		cin >> a >> b;
		pre[next[a]] = pre[a];
		next[pre[a]] = next[a];
		pre[a] = pre[b];
		next[pre[b]] = a;
		pre[b] = a;
		next[a] = b;
	}
	x = 0;
	for (int i = 1; i <= n; i++) {
		x = next[x];
		cout << x << " ";
	}
}