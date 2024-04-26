#include <bits/stdc++.h>
using namespace std;

int n, a[100001], k, l, r, m, slideshow[2002];

bool legit(int k) {
    memset(slideshow, 0, sizeof(slideshow));

    for (int i = 1; i <= k; i++) slideshow[a[i] + 1000]++;

    for (int i = k + 1; i <= n; i++) {
        if (slideshow[a[i] + 1000] > 0) slideshow[a[i] + 1000]++;
        slideshow[a[i - k] + 1000]--;
    }

    for (int i = 0; i <= 2000; i++) if (slideshow[i] > 0) return true;
    return false;
}

int main () {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("Rannum.inp", "r", stdin);
    freopen("Rannum.out", "w", stdout);
    
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];

    l = 1; r = n;
    while (l <= r) {
        m = (l+r)/2;

        if (legit(m)) {
            k = m;
            r = m-1;
        } else l = m+1;
    }

    cout << k << endl;
    return 0;
}