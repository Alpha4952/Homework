#include <bits/stdc++.h>
using std::cin;
using std::cout;
using std::fill;
using std::max;
using std::pair;
using std::vector;
using std::upper_bound;

long long t, n, rule[35], u[35], ma, may, ns, um;
vector <long long> r14, r30, r14c, r30c;
vector < pair<long long, long long> > wat14, wat30;
pair <long long, long long> temp;

void rule14(int crl) {
    if (crl == 14) {
        long long v = 0, c = 0;
        for (int i = 1; i <= 14; i++) {
            if (u[i]) {
                c++;
                v += rule[i];
            }
        }

        temp.first = v; temp.second = c;
        wat14.push_back(temp);
        //r14.push_back(v); r14c.push_back(c);
        return;
    }

    u[crl + 1] = 1;
    rule14(crl + 1);
    u[crl + 1] = 0;
    rule14(crl + 1);
}

void rule30(int crl) {
    if (crl == 34) {
        long long v = 0, c = 0;
        for (int i = 15; i <= 34; i++) {
            if (u[i]) {
                c++;
                v += rule[i];
            }
        }

        temp.first = v; temp.second = c;
        wat30.push_back(temp);
        //r30.push_back(v); r30c.push_back(c);
        return;
    }

    u[crl + 1] = 1;
    rule30(crl + 1);
    u[crl + 1] = 0;
    rule30(crl + 1);
}

bool sortr(pair<long long, long long> a, pair<long long, long long> b) {
    if (a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}

int main() {
    std::ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Coin.inp", "r", stdin);
    freopen("Coin.out", "w", stdout);

    rule[1] = 2; rule[2] = 3; rule[3] = 5; rule[4] = 10; rule[5] = 18; rule[6] = 33; rule[7] = 61; rule[8] = 112; rule[9] = 206; rule[10] = 379; rule[11] = 697; rule[12] = 1282; rule[13] = 2358; rule[14] = 4337; rule[15] = 7977; rule[16] = 14672; rule[17] = 26986; rule[18] = 49635; rule[19] = 91293; rule[20] = 167914; rule[21] = 308842; rule[22] = 568049; rule[23] = 1044805; rule[24] = 1921696; rule[25] = 3534550; rule[26] = 6501051; rule[27] = 11957297; rule[28] = 21992898; rule[29] = 40451246; rule[30] = 74401441; rule[31] = 136845585; rule[32] = 251698272; rule[33] = 462945298; rule[34] = 851489155;
    may = 1;

    fill(u, u + 15, 0);
    rule14(0);
    sort(wat14.begin(), wat14.end(), sortr);
    for (int i = 0; i < wat14.size(); i++) {
        r14.push_back(wat14[i].first);
        r14c.push_back(wat14[i].second);
    }

    fill(u, u + 35, 0);
    rule30(14);
    sort(wat30.begin(), wat30.end(), sortr);
    for (int i = 0; i < wat30.size(); i++) {
        r30.push_back(wat30[i].first);
        r30c.push_back(wat30[i].second);
    }

    cin >> t;
    while (may <= t) {
        cin >> n;

        fill(u, u + 35, 0);
        ma = -1;

        for (int i = 0; i < r14.size(); i++) {
            if (r14[i] > n) break;
            um = upper_bound(r30.begin(), r30.end(), n - r14[i]) - r30.begin() - 1;

            if (r30[um] + r14[i] == n) {
                ma = max(ma, r14c[i] + r30c[um]);
            }
        }

        cout << "Case #" << may << ": " << ma << '\n';
        may++;
    }

    return 0;
}