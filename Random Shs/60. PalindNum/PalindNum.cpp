#include <bits/stdc++.h>
using std::cin;
using std::cout;

std::string n;

int main() {
    std::ios_base::sync_with_stdio(NULL); std::cin.tie(NULL); std::cout.tie(NULL);
    std::freopen("PalindNum.inp", "r", stdin);
    std::freopen("PalindNum.out", "w", stdout);
    
    cin >> n;
    for (int i = 0; i < n.length() / 2 + 1; i++) {
        if (n[i] != n[n.size() - i - 1]) {
            cout << "NO" << std::endl;
            return 0;
        }
    }

    cout << "YES" << std::endl;
    return 0;
}