#include <bits/stdc++.h>
using namespace std;

long long t, a, b, k, optimusCrime, megatron;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Equation.inp", "r", stdin);
    freopen("Equation.out", "w", stdout);

    cin >> t;
    while (t--) {
        cin >> a >> b >> k;

        vector <long long> x, y;

        for (int i = -10; i <= 10; i++) {
            optimusCrime = sqrt((k - a * i) / b);
            megatron = (k - a * i) / b;
            //cout << i << " " << megatron << '\n';

            if (abs(megatron) <= 10 && megatron * b == k - a * i) {
                if (a * i + megatron * b == k) {
                    x.push_back(i);
                    y.push_back(megatron);
                }
            }
        }

        cout << x.size() << '\n';
        for (int i = 0; i < x.size(); i++) {
            cout << x[i] << " " << y[i] << '\n';
        }
    }
}