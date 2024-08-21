#include <bits/stdc++.h>
using namespace std;

long long S = 0, n, l, x, y, z;
vector<long long> s1, s2, s3;
string s;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Password.inp", "r", stdin);
    freopen("Password.out", "w", stdout);

    l = 0;

    cin >> s;

    n = s.length();

    s1.push_back(0);
    s2.push_back(0);
    s3.push_back(0);

    if (n < 5) cout << 0;
    else {
        for (long long i = 1;i <= n;i++) {
            s1.push_back(s1[i - 1]);
            s2.push_back(s2[i - 1]);
            s3.push_back(s3[i - 1]);

            if (s[i - 1] >= 'a' && s[i - 1] <= 'z') s1[i]++;
            if (s[i - 1] >= 'A' && s[i - 1] <= 'Z') s2[i]++;
            if (s[i - 1] >= '0' && s[i - 1] <= '9') s3[i]++;
        }

        for (long long i = 6;i <= n;i++) {
            x = s1[i] - s1[l];
            y = s2[i] - s2[l];
            z = s3[i] - s3[l];

            while (x && y && z && (i - l) >= 6) {
                l++;
                x = s1[i] - s1[l], y = s2[i] - s2[l], z = s3[i] - s3[l];
            }
            S += l;

        }
        cout << S;
    }
}