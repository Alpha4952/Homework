#include<bits/stdc++.h>
using namespace std;

long long a, b;

int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("Seq.inp", "r", stdin);
    freopen("Seq.out", "w", stdout);

    cin >> a >> b;

    if (a == 0 && b == 0) cout << "NO";
    else if (a == b) cout << "YES";
    else if (abs(a - b) == 1) cout << "YES";
    else cout << "NO";

    return 0;
}
