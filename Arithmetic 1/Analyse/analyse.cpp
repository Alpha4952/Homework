#include <bits/stdc++.h>
using namespace std;

int f[1001], c = 0, a[100001], temp, temp2;
string ts = "";
vector <string> s;

string its (int n) { // has no problem running
	string r = "";
	int a[10], c = 0;
	while (n > 0) {
		a[c] = n % 10;
		n /= 10;
		c++;
	}
	for (int i = c-1; i >= 0; i--) {
		if (a[i] == 0) r += "0";
		else if (a[i] == 1) r += "1";
		else if (a[i] == 2) r += "2";
		else if (a[i] == 3) r += "3";
		else if (a[i] == 4) r += "4";
		else if (a[i] == 5) r += "5";
		else if (a[i] == 6) r += "6";
		else if (a[i] == 7) r += "7";
		else if (a[i] == 8) r += "8";
		else if (a[i] == 9) r += "9";
	}
	return r;
}

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("analyse.inp", "r", stdin);
	freopen("analyse.out", "w", stdout);

	c = 0; s.push_back("0"); s.push_back("0");
	while (cin >> a[c]) c++;
	sort(a, a+c); //no problem occured
	for (int i = 2; i <= a[c-1]; i++) {
		temp = i; temp2 = 2; ts = "";
		while (temp > 1) {
			if (temp % temp2) temp2++;
			else {
				temp /= temp2;
				f[temp2]++;
			}
		}
		for (int j = 0; j <= i; j++) if (f[j] != 0) ts += its(f[j]) + " ";
		s.push_back(ts);
	}
	for (int i = 0; i < c; i++) {
		cout << s[a[i]] << '\n';
	}
}