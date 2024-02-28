#include <bits/stdc++.h>
using namespace std;

vector <long long> arr;
long long r, a, b, x, y, t;

void bruh (long long a) {
	int i = 3;
	while (a%2 == 0) {
		a /= 2;
		arr[2]++;
	}
	while (a > 1) {
		while (a%i == 0) {
			a /= i;
			arr[i]++;
		}
		i += 2;
		if (i*i > a) break;
	}
}

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("uocso.inp", "r", stdin);
	freopen("uocso.out", "w", stdout);

	cin >> t;
	for (int _ = 0; _ < t; _++) {
		cin >> a >> b;
		
		bruh(a);
		bruh(b);

		r = 1;
		for (int i = 1; i < max(a, b)+1; i++) {
			if (arr[i] > 0) r *= (arr[i] + 1);
		}
		cout << r << '\n';
	}
}