#include <bits/stdc++.h>
using namespace std;

int x, hmm, hmmm, c = 0;

bool check(int hmm, int hmmm) {
    return hmm / 10 == 7 || hmm % 10 == 7 || hmmm / 10 == 7 || hmmm % 10 == 7;
}

int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("Alarm.inp", "r", stdin);
    freopen("Alarm.out", "w", stdout);

    cin >> x >> hmm >> hmmm;
    while (!check(hmm, hmmm)) {
        c++;
        hmmm -= x;
        if (hmmm < 0) {
            hmmm += 60;
            hmm--;
            if (hmm < 0) {
                hmm = 23;
            }
        }
    }

    cout << c << endl;
    return 0;
}
