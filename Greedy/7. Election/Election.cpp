#include <bits/stdc++.h>
using namespace std;

long long outlets, devices, o[51], currentOutlets = 1, current;

bool sorter (long long a, long long b) {
    return a > b;
}

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("Election.inp", "r", stdin);
    //freopen("Election.out", "w", stdout);
    
    cin >> outlets >> devices;
    for (int i = 0; i < outlets; i++) cin >> o[i];
    sort(o, o+outlets, sorter);
    
    for (int i = 0; i < outlets; i++) {
        if (currentOutlets >= devices) {
            cout << i;
            return 1;
        }
        currentOutlets += o[i]-1;
    }
    cout << -1;
}