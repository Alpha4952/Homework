#include <bits/stdc++.h>
using namespace std;

string s;
int a[26];

int main() {
	std::ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
	freopen("CHAR.inp", "r", stdin);
	freopen("CHAR.out", "w", stdout);
	
	getline(cin, s);
	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') a[s[i] - 'A']++;
		else if (s[i] >= 'a' && s[i] <= 'z') a[s[i]-'a']++;
	}
	for (int i = 0; i < 26; i++) if (a[i] > 0) cout << char(i+'a') << " " << a[i] << '\n';
}