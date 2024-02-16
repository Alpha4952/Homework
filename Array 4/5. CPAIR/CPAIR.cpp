#include <bits/stdc++.h>
using namespace std;

int n, s, a[100001], c;

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	cin >> n >> s;
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a, a+n);
	for (int i = n-1; i > 0; i--) {
		for (int j = i-1; j >= 0; j--) {
			if (a[i] >= s) break;
			if (a[i] + a[j] < s) break;
			if (a[i] + a[j] == s) c++; 
		}
	}
	cout << c;
}