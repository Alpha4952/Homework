#include <bits/stdc++.h>
using namespace std;

long long n, r1, r2, r3, j, k;
string s;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Password.inp", "r", stdin);
    freopen("Password.out", "w", stdout);

    r1 = 0; r2 = 0; r3 = 0; n = 0;

    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') r1++;
        else if (s[i] >= 'A' && s[i] <= 'Z') r2++;
        else if (s[i] >= '0' && s[i] <= '9') r3++;

        if (r1 && r2 && r3) {
            j = i;
            n = s.length() - i;
            break;
        }
    }

    k = 0;
    while (1) {
        if (s[k] >= 'a' && s[k] <= 'z') r1--;
        else if (s[k] >= 'A' && s[k] <= 'Z') r2--;
        else if (s[k] >= '0' && s[k] <= '9') r3--;

        if (!r1 || !r2 || !r3) {
            for (int i = j; i < s.length(); i++) {
                if (s[i] >= 'a' && s[i] <= 'z') r1++;
                else if (s[i] >= 'A' && s[i] <= 'Z') r2++;
                else if (s[i] >= '0' && s[i] <= '9') r3++;

                if (r1 && r2 && r3) {
                    j = i;
                    n += s.length() - i;
                    break;
                }
            }
            if (!r1 || !r2 || !r3) break;
        } else {
            n += s.length() - j;
            k++;
        }
        //cout << k << " " << j << " " << n << " " << r1 << " " << r2 << " " << r3 << endl;
        if (j == s.length() - 1 || k >= j) break;
    }

    cout << n << endl;
    return 0;
}