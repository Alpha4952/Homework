#include <bits/stdc++.h>
using namespace std;

map <long long, long long> mp;
long long m, n, k, cnt;
string s;

int main () {
	freopen("CARD.inp", "r", stdin);
	freopen("CARD.out", "w", stdout);
	
	cin >> n >> k >> s;
	for (int i = 0; i < n; i++) mp[i] = i;
	m = n;
	
	for (int i = 0; i < s.size()-1; i++) {
		if (s[i] == 'A') {
			cnt = 0;
			for (auto x:mp) {
				if (cnt == 0) {
					mp[m] = x.second;
					mp.erase(x.first);
					break;
				}
				cnt++;
			}
		} else {
			cnt = 0;
			for (auto x:mp) {
				if (cnt == 1) {
					mp[m] = x.second;
					mp.erase(x.first);
					break;
				}
				cnt++;
			}
		}
		m++;
	}
	cnt = 0;
	for (auto x:mp) {
		if (cnt >= k-1 && cnt <= k+1) cout << x.second << " ";
		cnt++;
		if (cnt > k+1) break;
	}
}