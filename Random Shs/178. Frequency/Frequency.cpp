#include <bits/stdc++.h>
using namespace std;

long long n, a[100001], c, maxc, temp;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Frequency.inp", "r", stdin);
    freopen("Frequency.out", "w", stdout);
    
    fill(a, a + 201, 0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        
        a[temp + 100]++;
    }

    maxc = 0;
    for (int i = 0; i <= 200; i++) maxc = max(maxc, a[i]);
    for (int i = 0; i <= 200; i++) if (a[i] == maxc) cout << i - 100 << " ";
    cout << endl;
    return 0;
}