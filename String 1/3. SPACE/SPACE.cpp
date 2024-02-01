#include <bits/stdc++.h>
using namespace std;

int f, a;
string s;

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("SPACE.inp", "r", stdin);
	freopen("SPACE.out", "w", stdout);

	getline(cin, s);
	f = 1;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != ' ') continue;
		if (f) {
			cout << i;
			f = 0;
		}
		a = i;
	}
	cout << " " << a;
}