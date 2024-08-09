#include<bits/stdc++.h>
using std::cin;
using std::cout;
using std::string;
using std::vector;

string s;
long long n, a, t;
vector <long long> eh;

void plus() {
    int p = 1;

    if (eh[0] + 1 <= 9) eh[0]++;
    else {
        eh[0] = 0;

        while (1) {
            if (eh[p] + 1 <= 9) {
                eh[p]++;
                break;
            } else {
                eh[p] = 0;
                p++;
            }
        }
    }
}

void subtract() {
    int p = 1;

    if (eh[0] > 0) eh[0]--;
    else {
        eh[0] = 9;

        while (1) {
            if (eh[p] > 0) {
                eh[p]--;
                break;
            } else {
                eh[p] = 9;
                p++;
            }
        }
    }
}

bool nega() {
    for (int i = 0; i < eh.size(); i++) if (eh[i]) return false;
    return true;
}

bool check() {
    for (int i = 0; i < eh.size(); i++) if (eh[i] == 8) return true;
    return false;
}

int main() {
    std::ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("Tower.inp", "r", stdin);
    freopen("Tower.out", "w", stdout);

    cin >> s;

    if (s[0] == '-') t = 0;
    else t = 1;

    for (int i = s.length() - 1; i > 0; i--) {
        eh.push_back(s[i] - '0');
    }

    if (t) eh.push_back(s[0] - '0');

    //for (int i = 0; i < eh.size(); i++) cout << eh[i] << " ";
    //cout << '\n';
    eh.push_back(0);
    eh.push_back(0);

    a = 1;
    while (true) {
        if (t) plus();
        else {
            subtract();
            if (nega()) t = 1;
        }

        //for (int i = 0; i < eh.size(); i++) cout << eh[i] << " ";
        //cout << '\n';

        if (check()) {
            cout << a << std::endl;
            break;
        }
        a++;
    }

    return 0;
}
