#include <bits/stdc++.h>
using namespace std;

long long n, a, b, s, a1, b1;

void swap(long long &n1, long long &n2) {
    long long temp;
    
    temp = n1;
    n1 = n2;
    n2 = temp;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("Room.inp", "r", stdin);
    freopen("Room.out", "w", stdout);
    
    cin >> n >> a >> b;
    
    if (n * 6 <= a * b) {
    
        cout << a * b << '\n';
        cout << a << " " << b;
        return 0;
    }

    n *= 6;
    
    bool t = false;
    if (a > b) {
        swap(a, b);
        t = true;
    }

    s = 1e18;
    
    long long j;
    for (int i = a; i <= sqrt(n); i++) {
        j = n / i + (n % i > 0);
        if (j < b) j = b;
        if (s > i * j) {
            s = i * j;
            a1 = i;
            b1 = j;
        }
    }

    if (t) swap(a1, b1);
    
    cout << a1 * b1 << '\n' << a1 << " " << b1 << endl;
    return 0;
}
