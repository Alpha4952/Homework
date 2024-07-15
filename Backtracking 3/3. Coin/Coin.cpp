#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

using std::cin;
using std::cout;
using std::fill;
using std::max;
using std::pair;
using std::vector;
using std::upper_bound;

long long numberOfTests, number, coinValues[35], used[35], result, currentTest, upperBoundFound;
vector <long long> coinSum_upTo14, coinSum_upTo34, coinSum_upTo14_count, coinSum_upTo34_count;
vector < pair<long long, long long> > coinSum_upTo14_pair, coinSum_upTo30_pair;
pair <long long, long long> temp;

void coin14(int currentLength) {
    if (currentLength == 14) {
        long long value = 0, numberOfCoins = 0;
        for (int i = 1; i <= 14; i++) {
            if (used[i]) {
                numberOfCoins++;
                value += coinValues[i];
            }
        }

        temp.first = value; temp.second = numberOfCoins;
        coinSum_upTo14_pair.push_back(temp);
        return;
    }

    used[currentLength + 1] = 1;
    coin14(currentLength + 1);
    used[currentLength + 1] = 0;
    coin14(currentLength + 1);
}

void coin30(int currentLength) {
    if (currentLength == 34) {
        long long value = 0, numberOfCoins = 0;
        for (int i = 15; i <= 34; i++) {
            if (used[i]) {
                numberOfCoins++;
                value += coinValues[i];
            }
        }

        temp.first = value; temp.second = numberOfCoins;
        coinSum_upTo30_pair.push_back(temp);
        return;
    }

    used[currentLength + 1] = 1;
    coin30(currentLength + 1);
    used[currentLength + 1] = 0;
    coin30(currentLength + 1);
}

bool sortr(pair<long long, long long> a, pair<long long, long long> b) {
    if (a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}

int main() {
    std::ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Coin.inp", "r", stdin);
    freopen("Coin.out", "w", stdout);

    coinValues[1] = 2; coinValues[2] = 3; coinValues[3] = 5; coinValues[4] = 10; coinValues[5] = 18; coinValues[6] = 33; coinValues[7] = 61; coinValues[8] = 112; coinValues[9] = 206; coinValues[10] = 379; coinValues[11] = 697; coinValues[12] = 1282; coinValues[13] = 2358; coinValues[14] = 4337; coinValues[15] = 7977; coinValues[16] = 14672; coinValues[17] = 26986; coinValues[18] = 49635; coinValues[19] = 91293; coinValues[20] = 167914; coinValues[21] = 308842; coinValues[22] = 568049; coinValues[23] = 1044805; coinValues[24] = 1921696; coinValues[25] = 3534550; coinValues[26] = 6501051; coinValues[27] = 11957297; coinValues[28] = 21992898; coinValues[29] = 40451246; coinValues[30] = 74401441; coinValues[31] = 136845585; coinValues[32] = 251698272; coinValues[33] = 462945298; coinValues[34] = 851489155;
    currentTest = 1;

    fill(used, used + 15, 0);
    coin14(0);
    sort(coinSum_upTo14_pair.begin(), coinSum_upTo14_pair.end(), sortr);
    for (int i = 0; i < coinSum_upTo14_pair.size(); i++) {
        coinSum_upTo14.push_back(coinSum_upTo14_pair[i].first);
        coinSum_upTo14_count.push_back(coinSum_upTo14_pair[i].second);
    }

    fill(used, used + 35, 0);
    coin30(14);
    sort(coinSum_upTo30_pair.begin(), coinSum_upTo30_pair.end(), sortr);
    for (int i = 0; i < coinSum_upTo30_pair.size(); i++) {
        coinSum_upTo34.push_back(coinSum_upTo30_pair[i].first);
        coinSum_upTo34_count.push_back(coinSum_upTo30_pair[i].second);
    }

    cin >> numberOfTests;
    while (currentTest <= numberOfTests) {
        cin >> number;

        fill(used, used + 35, 0);
        result = -1;

        for (int i = 0; i < coinSum_upTo14.size(); i++) {
            if (coinSum_upTo14[i] > number) break;
            upperBoundFound = upper_bound(coinSum_upTo34.begin(), coinSum_upTo34.end(), number - coinSum_upTo14[i]) - coinSum_upTo34.begin() - 1;

            if (coinSum_upTo34[upperBoundFound] + coinSum_upTo14[i] == number) {
                result = max(result, coinSum_upTo14_count[i] + coinSum_upTo34_count[upperBoundFound]);
            }
        }

        cout << "Case #" << currentTest << ": " << result << '\n';
        currentTest++;
    }

    return 0;
}