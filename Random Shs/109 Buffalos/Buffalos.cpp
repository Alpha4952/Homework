#include <bits/stdc++.h>
using namespace std;

long long t, a, b, c;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Buffalos.inp", "r", stdin);
    freopen("Buffalos.out", "w", stdout);

    cin >> t;
    while (t--) {
        cin >> a >> b;

        vector <long long> standUser, Dio, Jotaro;

        for (int stand = 0; stand < a - 1; stand++) {
            for (int liar = a - 1; liar >= 0; liar--) {
                if (a - stand - liar < 0) continue;
                if (stand * 5 + liar * 3 + (a - stand - liar) / 3 != b) continue;

                if (stand + liar + (b - stand * 5 - liar * 3) * 3 == a) {
                    standUser.push_back(stand);
                    Dio.push_back(liar);
                    Jotaro.push_back(a - stand - liar);
                    //cout << stand << " " << liar << " " << a - stand - liar << '\n';
                }
            }
        }

        cout << standUser.size() << '\n';
        for (int i = 0; i < standUser.size(); i++) {
            cout << standUser[i] << " " << Dio[i] << " " << Jotaro[i] << '\n';
        }
    }

    return 0;
}