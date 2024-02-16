#include <bits/stdc++.h>
using namespace std;

int n, s[1001], t, c, sc[1001];

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> t;
		sc[t]++;
		if (sc[t] <= 1) continue;
		if (sc[t] == 2) s[t] = 1;
		else s[t] += sc[t]-1;
	}
	for (int i = 0; i < 1001; i++) c += s[i];
	cout << c;
}