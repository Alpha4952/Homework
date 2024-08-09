#include <bits/stdc++.h>
using namespace std;

long long n;
string s;

int main () {
    std::ios_base::sync_with_stdio(NULL); std::cin.tie(NULL); std::cout.tie(NULL);
    freopen("ReplaceDigit.inp", "r", stdin);
    freopen("ReplaceDigit.out", "w", stdout);
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;

        for (int j = 0; j < s.length(); j++) {
            if (s[j] == '0') cout << char('5');
            else cout << s[j];
        }

        cout << '\n';
    }

    return 0;
}