#include <bits/stdc++.h>
using namespace std;

long long k;
vector <long long> a;
string n;

void add() {
    for (int i = 0; i < n.length(); i++) {
        a[i] += n[n.length() - i - 1] - '0';
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] > 9) {
            a[i] -= 10;
            a[i + 1]++;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("ShiftLeft.inp", "r", stdin);
    freopen("ShiftLeft.out", "w", stdout);

    cin >> n >> k;

    for (int i = 0; i < n.length(); i++) {
        a.push_back(n[n.length() - i - 1] - '0');
    }

    //for (int i = 0; i < a.size(); i++) cout << a[a.size() - i - 1];
    //cout << endl;

    a.push_back(0);

    for (int i = 0; i < k; i++) {
        a.push_back(0);
        n += "0";
        add();
    }

    if (a[a.size() - 1]) cout << a[a.size() - 1];
    for (int i = 1; i < a.size(); i++) cout << a[a.size() - i - 1];
    cout << endl;
    return 0;
}