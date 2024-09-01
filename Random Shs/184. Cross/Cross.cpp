#include <bits/stdc++.h>
using namespace std;

long long n, c, t1, t2;
vector <long long> cow(100001, -1);

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Cross.inp", "r", stdin);
    freopen("Cross.out", "w", stdout);
    
    c = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t1 >> t2;

        if (cow[t1] == -1) cow[t1] = t2;
        else if (cow[t1] != t2) {
            cow[t1] = t2;
            c++;
        }
    }

    cout << c << endl;
    return 0;
}