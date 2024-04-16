#include <bits/stdc++.h>
using namespace std;

bool sortr(int a, int b) {
    return a > b;
}

int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("Dancing.inp", "r", stdin);
    freopen("Dancing.out", "w", stdout);

    long long n, temp, negal, negbl, posal, posbl, cura, curb, r = 0;
    vector <int> nega, negb, posa, posb;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp > 0) posa.push_back(temp);
        else nega.push_back(temp);
    }
    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp > 0) posb.push_back(temp);
        else negb.push_back(temp);
    }

    sort(posa.begin(), posa.end());
    sort(negb.begin(), negb.end());
    sort(posb.begin(), posb.end());
    sort(nega.begin(), nega.end());

    negal = nega.end() - nega.begin();
    negbl = negb.end() - negb.begin();
    posal = posa.end() - posa.begin();
    posbl = posb.end() - posb.begin();

    sort(nega.begin(), nega.end());
    sort(negb.begin(), negb.end(), sortr);
    sort(posa.begin(), posa.end());
    sort(posb.begin(), posb.end(), sortr);

    cura = 0; curb = 0;
    while (cura < negal & curb < posbl) {
        if (-nega[cura] > posb[curb]) {
            r++;
            cura++;
            curb++;
        } else {
            curb++;
        }
    }

    cura = 0; curb = 0;
    while (cura < posal & curb < negbl) {
        if (-negb[curb] > posa[cura]) {
            r++;
            cura++;
            curb++;
        } else {
            cura++;
        }
    }
    cout << r << endl;
    return 0;
}