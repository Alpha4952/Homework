#include <bits/stdc++.h>
using namespace std;

int n, m, a[60001], b[60001], c;

void div (int num) {
	int i = 2, mode = 1;
	if (num <= n-m) mode = 3;
	else if (num <= m) mode = 2;
	while (num > 1) {
		if (num % i) i++;
		else {
			while (num % i == 0) {
				num /= i;
				if (mode == 3) {
					b[i] += 2;
				} else if (mode == 2) {
					b[i]++;
				}
				a[i]++;
			}
		}
	}
}

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("CPRDIV.inp", "r", stdin);
	freopen("CPRDIV.out", "w", stdout);

	cin >> n >> m;
	for (int i = 2; i <= n; i++) div(i);
	for (int i = 0; i <= n; i++) if (a[i] > b[i]) c++;
	cout << c;
}