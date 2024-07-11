#include <bits/stdc++.h>
using namespace std;

long long n, m, w[20], u[20], l, r, rl, rr, did, f1;

void overWeight(long long currentLeft, long long currentRight) {
    if (currentLeft == currentRight) {
        f1 = 1;
        for (int i = 1; i <= n; i++) {
            if (u[i] == 2) {
                f1 = 0;
                cout << i << " ";
            }
        }
        if (f1) cout << 0;
        cout << '\n';
        for (int i = 1; i <= n; i++) if (u[i] == 1) cout << i << " ";
        did = 1;
    }
}

void getWeight () {
    long long left = 0, right = m;

    for (int i = 1; i <= n; i++) {
        if (u[i] == 1) left += w[i];
        if (u[i] == 2) right += w[i];
    }

    overWeight(left, right);
}

void wat(int iterator) {
    if (did) return;
    if (iterator == n + 1) {
        getWeight();
        return;
    }

    for (int i = 0; i <= 2; i++) {
        u[iterator] = i;
        wat(iterator + 1);
        u[iterator] = 0;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Can.inp", "r", stdin);
    freopen("Can.out", "w", stdout);

    for (int i = 1; i <= 19; i++) w[i] = pow(3, i - 1);
    fill(u, u + 20, 0);

    //for (int i = 1; i <= 18; i++) cout << w[i] << " ";

    cin >> n >> m;

    did = 0;
    wat(1);
}