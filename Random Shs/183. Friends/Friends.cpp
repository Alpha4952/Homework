#include <bits/stdc++.h>
using namespace std;

long long n, t1, t2, found, depth, s;
map <long long, vector <long long> > a;

void search(long long start) {
    if (!a[start].size()) {
        cout << "No" << '\n';
        return;
    }

    for (int i = 0; i < a[start].size(); i++) {
        if (a[start][i] == s) {
            if (found) cout << "Yes " << depth << '\n';
            else cout << "No" << '\n';

            return;
        } else if (a[start][i] == t2) {
            found = 1;
        }

        search(a[start][i]);
    }
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Friends.inp", "r", stdin);
    freopen("Friends.out", "w", stdout);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t1 >> t2;
        a[t1].push_back(t2);
    }

    /*for (int i = 1; i <= 100; i++) {
        if (a[i].size()) {
            cout << i << " / ";
            for (int j = 0; j < a[i].size(); j++) cout << a[i][j] << " ";
            cout << '\n';
        }
    }*/

    while (cin >> t1 >> t2) {
        if (!t1 && !t2) break;

        s = t1; depth = 0; found = 0;
        search(t1);
    }
}