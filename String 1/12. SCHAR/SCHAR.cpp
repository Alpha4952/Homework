#include <bits/stdc++.h>
using namespace std;

long long t, h[26], f;
string s;

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("BAI3.inp", "r", stdin);
	freopen("BAI3.out", "w", stdout);
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> s;
		fill(h, h+26, 0);
		f = 1;
		for (int j = 0; j < s.length(); j++) h[s[j]-'a']++;
		for (int j = 0; j < s.length(); j++) {
			if (h[s[j]-'a'] == 1) {
				cout << j+1 << '\n';
				f = 0;
				break;
			}
		}
		if (f) cout << -1 << '\n';
	}
}