#include <bits/stdc++.h>
using namespace std;

int m, x, y, f;
string n;

int main() {
	std::ios::sync_with_stdio(0), std::cin.tie(0), std::cout.tie(0);
	freopen("ROBOT.inp", "r", stdin);
	freopen("ROBOT.out", "w", stdout);
	
	x = 0; y = 0; f = 0;
	cin >> m >> n;
	
	for (int i = 0; i < m; i++) {
		if (n[i] == 'G') {
			if (f % 2) {
				x -= 2 - f;
			} else {
				y += 1 - f;
			}
		} else if (n[i] == 'L') {
			if (f % 2) {
				y -= 2 - f;
			} else {
				x -= 1 - f;
			}
			f += 1;
			f %= 4;
		} else if (n[i] == 'B') {
			if (f % 2) {
				x += 2 - f;
			} else {
				y -= 1 - f;
			}
			f += 2;
			f %= 4;
		} else if (n[i] == 'R') {
			if (f % 2) {
				y += 2 - f;
			} else {
				x += 1 - f;
			}
			f += 3;
			f %= 4;
		}
	}
	cout << x << " " << y;
}
    