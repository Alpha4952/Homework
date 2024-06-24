#include <bits/stdc++.h>
using namespace std;

int f[10001], money_count[101], dd[10001];
pair <int, int> a[101];
int n, s;

bool sortr(pair <int, int> x, pair <int, int> y) {
    return x.first < y.first;
}

void dp() {
    for (int j = 1; j <= s; j++) {
        f[j] = 99999999;

        for (int i = 1; i <= n; i++) {
            if (j >= a[i].first && f[j - a[i].first] < 99999999) {
                if (f[j] > f[j - a[i].first] + 1) {
                    f[j] = f[j - a[i].first] + 1;
                    dd[j] = i;
                }
            }
        }
    }
}

void bktrk() {
    int j = s, c = 0;

    while (j > 0) {
        money_count[a[dd[j]].second]++;
        j -= a[dd[j]].first;
    }
}

int main() {
    freopen("ATM.INP", "r", stdin);
    freopen("ATM.OUT", "w", stdout);

    cin >> n >> s;

    for (int i = 1; i <= n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }

    sort(a + 1, a + n + 1, sortr);

    dp();
    bktrk();

    cout << f[s] << endl;

    for (int i = 1; i <= n; i++) a[a[i].second].first = money_count[i];
    for (int i = 1; i <= n; i++) cout << money_count[i] << " ";
    return 0;
}
