#include <bits/stdc++.h>
using namespace std;

long long n, eh[100001], c;

bool check() {
    if (eh[1] == 1) return false;
    long long opens = 0;
    for (int i = 1; i <= n; i++) {
        if (eh[i]) opens--;
        else opens++;
        if (opens < 0) return false;
    }

    return opens == 0;
}

void print() {
    c++;
    for (int i = 1; i <= n; i++) {
        if (eh[i]) cout << ")";
        else cout << "(";
    }
    cout << '\n';
}

void generate(int currentLength, int opens) {
    if (currentLength == n) {
        if (check()) print();
        return;
    }

    if (opens*2 == n) {
        for (int i = currentLength + 1; i <= n; i++) eh[i] = 1;
        if (check()) print();
        return;
    }
    for (int i = 0; i < 2; i++) {
        eh[currentLength + 1] = i;
        if (i) {
            generate(currentLength + 1, opens);
        }
        else {
            generate(currentLength + 1, opens + 1);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Ngoac.inp", "r", stdin);
    freopen("Ngoac.out", "w", stdout);
    
    cin >> n;

    c = 0;

    generate(0, 0);
    cout << c << std::endl;
    return 0;
}