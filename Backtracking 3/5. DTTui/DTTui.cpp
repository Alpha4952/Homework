#include <bits/stdc++.h>
using std::cin;
using std::cout;
using std::min;
using std::max;
using std::vector;
using std::pair;
using std::fill;
using std::upper_bound;

long long n, m, w1[51], v1[51], w2[51], v2[51], maxv, eh[21];
pair <long long, long long> temp;
vector < pair<long long, long long> > haha, hehe;
vector <long long> maxHaha, maxHehe, wHaha, wHehe;

void wat(int iterator, long long w, long long v) {
    if (iterator == n + 1) {
        maxv = std::max(maxv, v);
        return;
    }

    if (w + w1[iterator + 1] <= m) wat(iterator + 1, w + w1[iterator + 1], v + v1[iterator + 1]);
    wat(iterator + 1, w, v);
}

void generate(int k, int type, int length) {
    if (k == length + 1) {
        temp.first = 0; temp.second = 0;
        if (type == 1) {
            for (int i = 1; i <= k; i++) {
                if (!eh[i]) continue;
                
                temp.first += w1[i];
                temp.second += v1[i];
            }

            if (temp.first <= m)haha.push_back(temp);
        } else {
            for (int i = 1; i <= k; i++) {
                if (!eh[i]) continue;

                temp.first += w2[i];
                temp.second += v2[i];
            }
            if (temp.first <= m) hehe.push_back(temp);
        }
        return;
    }

    for (int i = 0; i < 2; i++) {
        eh[k] = i;
        generate(k + 1, type, length);
    }
}

bool sortr(pair<long long, long long> a, pair<long long, long long> b) {
    if (a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}

void wat1(int iterator, long long w, long long v) {
    fill(eh, eh + 21, 0);
    generate(1, 1, 20);
    sort(haha.begin(), haha.end(), sortr);
    //for (int i = 1; i <= 20; i++) cout << eh[i];

    fill(eh, eh + 21, 0);
    generate(1, 2, n - 20);
    sort(hehe.begin(), hehe.end(), sortr);
    //cout << '\n';
    //for (int i = 1; i <= 20; i++) cout << eh[i];

    maxHaha.push_back(haha[0].second);
    for (int i = 1; i < haha.size(); i++) maxHaha.push_back(max(maxHaha[i-1], haha[i].second));
    for (int i = 0; i < haha.size(); i++) wHaha.push_back(haha[i].first);

    maxHehe.push_back(hehe[0].second);
    for (int i = 1; i < hehe.size(); i++) maxHehe.push_back(max(maxHehe[i-1], hehe[i].second));
    for (int i = 0; i < hehe.size(); i++) wHehe.push_back(hehe[i].first);

    int u;

    for (int i = 0; i < haha.size(); i++) if (wHaha[i] <= m) maxv = max(maxv, maxHaha[i]);

    for (int i = 0; i < hehe.size(); i++) {
        if (wHehe[i] > m) continue;

        maxv = max(maxv, maxHehe[i]);

        u = upper_bound(wHaha.begin(), wHaha.end(), m - wHehe[i]) - wHaha.begin() - 1;
        maxv = max(maxv, maxHehe[i] + maxHaha[u]);
    }
}

int main() {
    std::ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("DTTui.inp", "r", stdin);
    freopen("DTTui.out", "w", stdout);

    cin >> n >> m;
    for (int i = 1; i <= min(n, 20LL); i++) {
        cin >> w1[i] >> v1[i];
    }

    if (n > 20) {
        for (int i = 1; i <= n - 20; i++) cin >> w2[i] >> v2[i];
    }

    maxv = 0;
    if (n <= 20) wat(0, 0, 0);
    else wat1(0, 0, 0);

    cout << maxv << std::endl;
    return 0;
}