#include <bits/stdc++.h>
using namespace std;

int c;
string s;

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	getline(cin, s); c = (s.length() > 0);
	for (int i = 1; i < s.length(); i++) if (s[i] == ' ' && s[i-1] != ' ') c++;
	cout << c << '\n';
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ' && s[i-1] != ' ') cout << '\n';
		else cout << s[i];
	}
}