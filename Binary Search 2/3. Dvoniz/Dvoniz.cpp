#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("Dvoniz.inp", "r", stdin);
    freopen("Dvoniz.out", "w", stdout);

    int n, s, a[100001], maxl, end, temp;
    a[0] = 0;

    cin >> n >> s;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] += a[i - 1];
    }

    //for (int i = 1; i <= n; i++) cout << a[i] << " ";
    //cout << endl;

    for (int i = 1; i < n; i++) {
        maxl = (n - i + 1) / 2;

        end = upper_bound(a + i, a + i + maxl, a[i - 1] + s) - a - 1;
        //cout << end << " ";
        for (int j = end; j >= i-1; j--) {
            temp = j - i + 1;
            if (a[j + temp] - a[j] <= s) {
                cout << temp*2 << endl;
                break;
            }
        }
    }



    cout << 0 << endl;
    return 0;
}