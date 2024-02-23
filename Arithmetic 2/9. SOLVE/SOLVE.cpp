#include <bits/stdc++.h>
using namespace std;

int s (long long n) {
    int r = 0;
    while (n > 0) {
        r += n%10;
        n /= 10;
    }
    return r;
}

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long n;
    bool l = true;
    cin >> n;

    for (int i = sqrt(n); i > 0; i--) {
	if (n%i) continue;
        else if (i + s(i) == n/i) {
            cout << i;
            l = false;
            break;
        }
    }

    if (l) cout << -1;
}