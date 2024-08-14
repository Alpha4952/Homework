#include <bits/stdc++.h>
using namespace std;

long long a, n, hehe[10];

string toStr(long long n) {
    string r;
    r = "";
    while (n) {
        r += char(n%10 + '0');
        n /= 10;
    }
    return r;
}

void c(string s) {
    for (int i = 0; i < s.length(); i++) {
        hehe[s[i] - '0']++;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("WNum.inp", "r", stdin);
    freopen("WNum.out", "w", stdout);
    
    fill(hehe, hehe+10, 0);
    
    cin >> n >> a;

    for (int i = 0; i < n; i++) {
        c(toStr(a));
        a++;
    }
    
    for (int i = 0; i < 10; i++) cout << hehe[i] << " ";
    return 0;
}