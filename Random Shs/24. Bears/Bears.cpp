#include <bits/stdc++.h>
using namespace std;

int bearA, bearB, c;

int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("Bears.inp", "r", stdin);
    freopen("Bears.out", "w", stdout);

    cin >> bearA >> bearB;

    c = 0;
    while (bearA <= bearB) {
        bearA *= 3;
        bearB *= 2;
        c++;
    }
    
    cout << c << endl;
    return 0;
}
