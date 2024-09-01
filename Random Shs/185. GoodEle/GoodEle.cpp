#include <bits/stdc++.h>
using namespace std;

long long n, a[100001], es[100001], os[100001], c;

int main() {
    std::ios_base::sync_with_stdio(NULL); std::cin.tie(NULL); std::cout.tie(NULL);
    freopen("GoodEle.inp", "r", stdin);
    freopen("GoodEle.out", "w", stdout);

    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];

    fill(es, es + n + 1, 0);
    fill(os, os + n + 1, 0);

    for (int i = 1; i <= n; i++) {
        es[i] = es[i - 1];
        os[i] = os[i - 1];
        if (i % 2 == 0)
            es[i] += a[i];
        else
            os[i] += a[i];
    }

    c = 0;

    for (int i = 1; i <= n; i++) {
        if (es[i - 1] + (os[n] - os[i]) == os[i - 1] + (es[n] - es[i])) c++;
    }

    cout << c;
    return 0;
}