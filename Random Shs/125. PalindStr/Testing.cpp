#include <bits/stdc++.h>
using namespace std;

long long n;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    cout << "hmm1" << endl;
    string hmm1 = "KACOBEGIGEMHBEGIGE", hmm2 = "I";
    int h1l = 18, h2l = 1;

    int dp[1001][1001];

    for (int i = 0; i <= h1l; i++) dp[i][0] = 0;
    for (int i = 0; i <= h2l; i++) dp[0][i] = 0;

    for (int i = 1; i <= h1l; i++) {
        for (int j = 1; j <= h2l; j++) {
            if (hmm1[i - 1] == hmm2[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
            else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    
    cout << dp[h1l][h2l];
    return 0;
}