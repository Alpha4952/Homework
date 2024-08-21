#include <bits/stdc++.h>
using namespace std;

long long t, n, k, temp, c;
string s;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("FrequencyOfDigit.inp", "r", stdin);
    freopen("FrequencyOfDigit.out", "w", stdout);
    
    cin >> t;
    while (t--) {
        c = 0;
        
        cin >> n >> k;
        while (n--) {
            cin >> s;
            for (int i = 0; i < s.length(); i++) if (s[i] - '0' == k) c++;
        }

        cout << c << '\n';
    }
}