#include <bits/stdc++.h>
using namespace std;

int posa[100001], nega[100001], posb[100001], negb[100001];
int n, posal, negal, posbl, negbl;

int bsearch1(int d, int c, int x) {
    int mid, result = -1;

    while (d <= c) {
        mid = (d + c) / 2;
        if (negb[mid] > x) {
            result = mid;
            c = mid - 1;
        } else d = mid + 1;
    }
    return result;
}

int bsearch2(int d, int c, int x) {
    int mid, result = -1;
    while (d <= c) {
        mid = (d + c) / 2;
        if (posb[mid] < x) {
            result = mid;
            d = mid + 1;
        } else c = mid - 1;
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("DANCING.INP", "r", stdin);
    freopen("DANCING.OUT", "w", stdout);

    int temp, first, last, r = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> temp;
        if (temp > 0) {
            posal++;
            posa[posal] = temp;
        } else {
            negal++;
            nega[negal] = -temp;
        }
    }
    
    for (int i = 1; i <= n; i++) {
        cin >> temp;
        if (temp > 0) {
            posbl++;
            posb[posbl] = temp;
        } else {
            negbl++;
            negb[negbl] = -temp;
        }
    }

    sort(posb + 1, posb + posbl + 1);
    sort(negb + 1, negb + negbl + 1);
    sort(posa + 1, posa + posal + 1);
    sort(nega + 1, nega + negal + 1);

    first = 1;
    for (int i = 1; i <= posal; i++) {
        temp = bsearch1(first, negbl, posa[i]);
        if (temp != -1) {
            r++;
            first = temp + 1;
        } else break;
    }

    last = posbl;
    for (int i = negal; i >= 1; i--) {
        temp = bsearch2(1, last, nega[i]);
        if (temp != -1) {
            r++;
            last = temp - 1;
        } else break;
    }

    cout << r;
    return 0;
}
