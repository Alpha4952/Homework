#include <bits/stdc++.h>
using std::cin;
using std::cout;

long long n, a[100001], m, t, b[100001];
std::pair <long long, long long> ehe[100001];

bool sortr (std::pair<long long, long long> a, std::pair<long long, long long> b) {
    return a.second < b.second;
}

int main() {
    std::ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Modm.inp", "r", stdin);
    freopen("Modm.out", "w", stdout);
    
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> t;

        ehe[i].first = i;
        ehe[i].second = t%m;
    }

    std::sort(ehe + 1, ehe + n + 1, sortr);

    for (int i = 1; i <= n; i++) b[i] = (ehe[i].second % m == 0);

    for (int i = 1; i <= n; i++) cout << ehe[i].second << " ";
    cout << '\n';
    for (int i = 1; i <= n; i++) cout << b[i] << " ";
    cout << '\n';

    cout << t << std::endl;
    return 0;
}