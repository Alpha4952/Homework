#include <bits/stdc++.h>
using namespace std;

long long n, m, a[100001], s[100001], c, son;
vector <long long> haha;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Exam.inp", "r", stdin);
    freopen("Exam.out", "w", stdout);

    a[0] = 0; s[0] = 0;

    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        s[i] = a[i] + s[i - 1];

        if (s[i] <= m) cout << 0 << " ";
        else {
            son = 0;
            sort(haha.begin(), haha.end());
            for (int j = haha.size() - 1; j >= 0; j--) {
                son += haha[j];
                if (s[i] - son <= m) {
                    cout << haha.size() - j << " ";
                    break;
                }
            }
        }
        //for (int i = 1; i <= haha.size(); i++) cout << haha[i-1] << " ";
        //cout << '\n';
        haha.push_back(a[i]);
    }
}