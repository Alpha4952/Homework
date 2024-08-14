#include <bits/stdc++.h>
using std::cin;
using std::cout;
using std::string;
using std::vector;

long long a, b;
string n1, n2;

string toString(long long n, bool type) {
    string r = "";

    while (n) {
        if (type) {
            if (n % 10 == 6) r += "5";
            else r += char(n % 10 + '0');
        } else {
            if (n % 10 == 5) r += "6";
            else r += char(n % 10 + '0');
        }
        n /= 10;
    }

    return r;
}

void sum(string n1, string n2) {
    vector <long long> s;

    for (int i = 0; i < n1.length(); i++) s.push_back(n1[i] - '0');
    if (n1.length() >= n2.length()) {
        for (int i = 0; i < n1.length(); i++) s[i] += n2[i] - '0';
    } else {
        for (int i = 0; i < n1.length(); i++) s[i] += n2[i] - '0';
        for (int i = n1.length(); i < n2.length(); i++) {
            s.push_back(n2[i] - '0');
        } 
    }

    s.push_back(0);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] > 9) {
            s[i] -= 10;
            s[i+1]++;
        }
    }

    if (s[s.size()-1]) cout << s[s.size() - 1];
    for (int i = s.size() - 2; i >= 0; i--) cout << s[i];
}

int main() {
    std::ios_base::sync_with_stdio(NULL); std::cin.tie(NULL); std::cout.tie(NULL);
    std::freopen("WrongDigit.inp", "r", stdin);
    std::freopen("WrongDigit.out", "w", stdout);

    cin >> a >> b;

    n1 = toString(a, 1); n2 = toString(b, 1);
    sum(n1, n2);
    cout << " ";
    n1 = toString(a, 0); n2 = toString(b, 0);
    sum(n1, n2);
}