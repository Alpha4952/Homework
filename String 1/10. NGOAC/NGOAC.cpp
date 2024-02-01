#include <bits/stdc++.h>
using namespace std;

int x, l;
string n;

int main() {
	std::ios::sync_with_stdio(0), std::cin.tie(0), std::cout.tie(0);

	l = 1;
	
	cin >> n;
	for (int i = 0; i < n.length(); i++) {
		if (n[i] != '(' && n[i] != ')') {
			l = 0;
			break;
		} else if (n[i] == '(') x++;
		else if (n[i] == ')') {
			x--;
			if (x < 0) {
				l = -1;
				break;
			}
		}
	}
	if (l == 0) cout << "KHONG HOP LE";
	else if (x > 0 || l == -1) cout << "KHONG DUNG";
	else if (l == 1) cout << "DUNG";
}
   