#include <bits/stdc++.h>
using std::string;

string a, b;

bool smol(string a, string b) {
    if (a.length() > b.length()) return false;
    else if (a.length() < b.length()) return true;
    else {
        for (int i = a.length() - 1; i >= 0; i--) {
            if (a[i] < b[i]) return true;
            else if (a[i] > b[i]) return false;
        }
    }

    return true;
}

void print(string s) {
    for (int i = s.length() - 1; i >= 0; i--) std::cout << s[i];
}

int main() {
    std::ios_base::sync_with_stdio(NULL); std::cin.tie(NULL); std::cout.tie(NULL);
    std::freopen("ReverseNum.inp", "r", stdin);
    std::freopen("ReverseNum.out", "w", stdout);
    
    std::cin >> a >> b;

    if (smol(a, b)) {
        print(b);
    } else print(a);

    return 0;
}