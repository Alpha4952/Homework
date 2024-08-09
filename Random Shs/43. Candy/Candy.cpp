#include <bits/stdc++.h>
using namespace std;

long long n, m, st, en;
vector<long long> a(1000001), cl(1000001), index(1000001);

int main() {
    ios_base::sync_with_stdio(NULL); std::cin.tie(NULL); std::cout.tie(NULL);
    freopen("Candy.inp", "r", stdin);
    freopen("Candy.out", "w", stdout);

    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        index[i] = i + 1;
    }

    st = 0; en = n - 1;

    while (st <= en) {
        if (cl[st] > m) {
            cl[st] -= m;
            en++;
            index.push_back(index[st]);
            cl.push_back(cl[st]);
        }
        st++;
    }

    cout << index[st - 1] << endl;

    return 0;
}
