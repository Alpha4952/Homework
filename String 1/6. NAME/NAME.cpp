#include <bits/stdc++.h>
using namespace std;

string s;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    /*freopen("NAME.inp", "r", stdin);
    freopen("NAME.out", "w", stdout);*/
    getline(cin, s);

    if (s[0] <= 'z' && s[0] >= 'a') cout << char(s[0] - 'a' + 'A');
    else cout << s[0];
    for (int i = 1; i < s.length(); i++) {
        if (s[i] <= 'z' && s[i] >= 'a' && s[i - 1] == ' ') cout << char(s[i] - 'a' + 'A');
        else if (s[i] == ' ' && s[i - 1] != ' ') cout << " "; 
        else if ((s[i] >= 'a' && s[i] <= 'z') && ((s[i - 1] >= 'a' && s[i - 1] <= 'z') || (s[i - 1] >= 'A' && s[i - 1] <= 'Z'))) cout << char(s[i]);
        else if ((s[i] >= 'A' && s[i] <= 'Z') && ((s[i - 1] >= 'a' && s[i - 1] <= 'z') || (s[i - 1] >= 'A' && s[i - 1] <= 'Z'))) cout << char(s[i] - 'A' + 'a');
        else if ((s[i] >= 'A' && s[i] <= 'Z') && s[i - 1] == ' ') cout << s[i];
    }
}