#include <bits/stdc++.h>
using namespace std;


struct renters {
    int start, end, money, id;
};

bool sortr (renters x, renters y) {
    if (x.start == y.start) return x.end < y.end;
    return x.start < y.start;
}

long long n, dp[100001], trace[100001], maxv, count;
renters temp;
vector <renters> a;
vector <long long> tracer;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("ThueMay.inp", "r", stdin);
    freopen("ThueMay.out", "w", stdout);
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp.start >> temp.end >> temp.money;
        temp.id = i;

        if (temp.start <= temp.end) a.push_back(temp);
    }

    sort(a.begin(), a.end(), sortr);
    
    for (int i = 0; i < a.size(); i++) dp[i] = a[i].money;
    fill(trace, trace + a.size(), -1);
    maxv = 0;

    for (int i = 1; i < a.size(); i++) {
        for (int j = 0; j < i; j++) {
            if (a[j].end <= a[i].start) {
                if (dp[i] < dp[j] + a[i].money) {
                    dp[i] = dp[j] + a[i].money;
                    trace[i] = j;
                }
            }
        }
        maxv = max(maxv, dp[i]);
    }

    for (int i = 0; i < a.size(); i++) {
        if (dp[i] == maxv) {
            tracer.push_back(i);
            break;
        }
    }

    int i = tracer[0];
    while (i >= 0) {
        i = trace[i];
        if (i >= 0) tracer.push_back(a[i].id);
    }

    cout << tracer.size() << " " << maxv << '\n';
    for (int i = tracer.size() - 1; i >= 0; i--) cout << tracer[i] + 1 << " ";
}