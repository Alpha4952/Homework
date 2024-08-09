#include<bits/stdc++.h>
using namespace std;

long long a, b, s, minv;

int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("turtle.inp", "r", stdin);
    freopen("turtle.out", "w", stdout);

    cin >> a >> b >> s;

    int minv = abs(a) + abs(b);

    if (s < minv) {
        cout << "No" << endl;
        return 0;
    }

    if ((s - minv) % 2 == 0) {
        cout << "Yes" << endl;
    } else cout << "No" << endl;
    
    return 0;
}
