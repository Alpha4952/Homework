#include <bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("ASTRING.inp", "r", stdin);
	freopen("ASTRING.out", "w", stdout);
	string s;
	getline(cin, s);
	for (int i = s.length()-1; i >= 0; i--) cout << s[i];
}