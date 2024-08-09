#include<bits/stdc++.h>
using namespace std;

long long temp1 = -1, temp2 = -1;
    long long a, b, c;
    bool legit = false;

int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("Kill.inp", "r", stdin);
    freopen("Kill.out", "w", stdout);
    
    cin >> a >> b >> c;
    legit = false;
    for (long long i = 0; i <= c / b; i++) {
        if ((c - b * i) % a == 0) {
            legit = true;
            temp2 = i;
            temp1 = (c - b * i) / a;
            break;
        }
    }

    if (legit) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
