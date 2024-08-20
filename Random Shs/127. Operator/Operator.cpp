#include <bits/stdc++.h>
using namespace std;

long long n, r;
string hmm;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Operator.inp", "r", stdin);
    freopen("Operator.out", "w", stdout);

    r = 0;

    cin >> n;
    while (n--) {
        //++X hoặc X++ hoặc --X hoặc X--
        cin >> hmm;
        if (hmm == "X++" || hmm == "++X") r++;
        else r--;
    }

    cout << r << endl;
    return 0;
}