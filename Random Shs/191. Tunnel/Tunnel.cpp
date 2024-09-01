#include <bits/stdc++.h>
using namespace std;

long long n, temp, c, ii, io, hmm[100001];
vector <long long> in, out;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Tunnel.inp", "r", stdin);
    freopen("Tunnel.out", "w", stdout);
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        in.push_back(temp);
    }
    for (int i = 0; i < n; i++) {
        cin >> temp;
        out.push_back(temp);
    }

    c = 0; ii = 0; io = 0;
    fill(hmm, hmm + 100001, 0);

    while (ii < n && io < n) {
        if (hmm[in[ii]]) {
            ii++;
        }
        if (in[ii] != out[io]) {
            c++;
            hmm[out[io]] = 1;
            io++;
        } else if (in[ii] == out[io]) {
            ii++;
            io++;
        }
    }

    cout << c << endl;
}