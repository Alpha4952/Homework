#include <bits/stdc++.h>
using namespace std;

int a[10];
string s;

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	getline(cin, s);
	for (int i = 0; i < s.length(); i++) if (s[i] >= '0' && s[i] <= '9') a[s[i]-'0']++;
	for (int i = 0; i < 10; i++) cout << a[i] << " ";
}