#include <bits/stdc++.h>
using namespace std;

long long t, n, eh[100001], uh[100001], inp, hmmmm;
pair <long long, long long> hmm[10001];
string hm;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("MinPlaces.inp", "r", stdin);
    freopen("MinPlaces.out", "w", stdout);
    
    cin >> t;
    while (t--) {
        cin >> n;

        fill(eh, eh + 100001, 0);
        fill(uh, uh + 100001, 0);

        for (int i = 0; i < n; i++) {
            cin >> inp;
            eh[inp]++;
        }

        for (int i = 0; i < n; i++) {
            cin >> inp;
            uh[inp]++;
        }

        for (int i = 0; i <= 2359; i++) {
            eh[i] += eh[i-1];
            eh[i] -= uh[i];
        }

        hmmmm = 0;
        for (int i = 0; i <= 2359; i++) hmmmm = max(hmmmm, eh[i]);

        cout << hmmmm << '\n';

        //for (int i = 0; i <= 2359; i++) cout << eh[i] << " ";
        //cout << '\n';
        //for (int i = 0; i <= 2359; i++) cout << uh[i] << " ";
        //cout << '\n';
    }
}