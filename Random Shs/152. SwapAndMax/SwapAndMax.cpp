#include <bits/stdc++.h>
using namespace std;

long long t, n, r, temp;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("SwapAndMax.inp", "r", stdin);
    freopen("SwapAndMax.out", "w", stdout);

    cin >> t;
    while (t--) {
        cin >> n;

        vector <long long> hmm, crime;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            hmm.push_back(temp);
        }

        sort(hmm.begin(), hmm.end());

        //cout << hmm[0] << " ";
        for (int i = 0; i < n/2; i++) {
            //cout << hmm[i] << " ";
            crime.push_back(hmm[i]);
            crime.push_back(hmm[n-i - 1]);
        }
        if (n%2) crime.push_back(hmm[n/2]);

        r = abs(crime[0] - crime[n-1]);
        for (int i = 1; i < n; i++) {
            //cout << crime[i] << " ";

            r += abs(crime[i] - crime[i - 1]);
        }

        cout << r << '\n';
    }
}