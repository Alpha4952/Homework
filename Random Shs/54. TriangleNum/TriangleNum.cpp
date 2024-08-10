#include <bits/stdc++.h>
using std::cin;
using std::cout;
using std::vector;

long long t, n, hmm;
vector <long long> wat;

int main() {
    std::ios_base::sync_with_stdio(NULL); std::cin.tie(NULL); std::cout.tie(NULL);
    freopen("TriangleNum.inp", "r", stdin);
    freopen("TriangleNum.out", "w", stdout);

    for (int i = 1; i <= 14143; i++) {
        wat.push_back(i*(i-1)/2);
    }

    //cout << wat[wat.size() - 1] << '\n';

    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        for (int i = 0; i < 14143; i++) {
            if (wat[i] >= n) {
                cout << "NO" << '\n';
                break;
            }

            hmm = std::lower_bound(wat.begin(), wat.end(), n - wat[i]) - wat.begin();
            if (wat[hmm] + wat[i] == n) {
                cout << "YES" << '\n';
                break;
            }
        }
    }
}