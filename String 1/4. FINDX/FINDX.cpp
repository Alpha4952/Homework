#include <bits/stdc++.h>
using namespace std;

int hmm[100001], c;
char a;
string s;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	cin >> a;
	for (int i = 0; i < 2; i++) getline(cin, s);
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == a) {
			hmm[c] = i;
			c++;
		}
	}
	cout << c << '\n';
	for (int i = 0; i < c; i++) {
		cout << hmm[i];
		if (i < c-1) cout << " ";
	}
}