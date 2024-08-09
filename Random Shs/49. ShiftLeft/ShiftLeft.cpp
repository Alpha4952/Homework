#include <bits/stdc++.h>
using namespace std;

long long k, a[1000001];
string n;

void add() {
    for (int i = 0; i < n.length(); i++) {
        a[i] += n[n.length() - i - 1] - '0';
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
        a[i] = n[n.length() - i - 1] - '0';
    }

    for (int i = 0; i < k; i++) {
        n += "0";
        add();
    }

    for (int i = 0; i < n.length(); i++) cout << a[n.length() - i - 1];
    cout << endl;
    return 0;
}