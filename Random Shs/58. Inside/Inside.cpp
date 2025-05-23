#include <bits/stdc++.h>
using namespace std;

float area(int x1, int y1, int x2, int y2, int x3, int y3) {
    return abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);
}

bool isInside(int x1, int y1, int x2, int y2, int x3, int y3, int x, int y) {
    float A = area(x1, y1, x2, y2, x3, y3);
    float A1 = area(x, y, x2, y2, x3, y3);

    float A2 = area(x1, y1, x, y, x3, y3);

    float A3 = area(x1, y1, x2, y2, x, y);

    return (A == A1 + A2 + A3);
}

long long x1, x2, x3, x4, y1, y2, y3, y4;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    std::freopen("Inside.inp", "r", stdin);
    std::freopen("Inside.out", "w", stdout);
    

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
 
    if (isInside(x1, y1, x2, y2, x3, y3, x4, y4)) cout << 1;
    else cout << 0;

    return 0;
}