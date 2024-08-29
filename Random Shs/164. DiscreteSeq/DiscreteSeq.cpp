#include <bits/stdc++.h>
using namespace std;

long long n, a[1000001], t;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("DiscreteSeq.inp", "r", stdin);
    freopen("DiscreteSeq.out", "w", stdout);
    
    fill(a, a + 1000001, 0);

    cin >> n;
    while (n--) {
        cin >> t;
        a[t]++;
    }

    for (int i = 0; i <= 1000000; i++) {
        if (a[i]) cout << i << ":" << a[i] << '\n';
    }
}