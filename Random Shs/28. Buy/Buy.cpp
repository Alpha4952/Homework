#include<bits/stdc++.h>
using namespace std;

long long a, b, n, temp1 = -1, temp2 = -1, legit = 0;

int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("Buy.inp", "r", stdin);
    freopen("Buy.out", "w", stdout);

    cin >> n >> a >> b;


    for (long long i = n / b; i >= 0; i--) {
        if ((n - b * i) % a == 0) {
            legit = 1;
            temp2 = i;
            temp1 = (n - b * i) / a;
            break;
        }
    }

    if (legit) {
        cout << "YES" << endl << temp1 << " " << temp2 << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
