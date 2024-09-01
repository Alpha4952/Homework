#include <bits/stdc++.h>
using namespace std;

long long n, k, temp, c;
vector <long long> a;
map <long long, long long> hmm;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Message.inp", "r", stdin);
    freopen("Message.out", "w", stdout);

    c = 0;
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        
        //for (int i = 0; i < a.size(); i++) cout << a[i] << " ";
        //cout << '\n';
        
        if (hmm[temp]) continue;

        if (c == k) {
            hmm[a[0]] = 0;
            hmm[temp] = 1;
            a.erase(a.begin(), a.begin() + 1);
            a.push_back(temp);
        } else {
            a.push_back(temp);
            hmm[temp] = 1;
            c++;
        }
    }

    cout << a.size() << endl;
    for (int i = a.size() - 1; i >= 0; i--) cout << a[i] << " ";
    return 0;
}