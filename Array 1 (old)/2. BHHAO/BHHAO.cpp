#include <bits/stdc++.h>
using namespace std;

long long n, temp, c;

int charsum (long long num) {
	int r = 0;
	while (num > 0) {
		r += num%10;
		num = num / 10;
	}
	return r;
}

bool BHHAO (long long num) {
	int r = 0;
	for (int i = 1; i*2 <= num; i++) if (num%i==0) r += i;
	return (num == r);
}

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("BHHAO.inp", "r", stdin);
	freopen("BHHAO.out", "w", stdout);

	cin >> n;
	c = 0;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		if (BHHAO(charsum(temp))) c++;
	}
	cout << c;
}