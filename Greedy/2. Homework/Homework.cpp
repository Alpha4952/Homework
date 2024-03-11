#include <bits/stdc++.h>
using namespace std;

long long skill, number, c, arr[1001];

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("Homework.inp", "r", stdin);
    freopen("Homework.out", "w", stdout);
    
    cin >> number >> skill;
    for (int i = 0; i < number; i++) cin >> arr[i];
    
    sort(arr, arr+number);

    for (int i = 0; i < number; i++) {
        if (skill >= arr[i]) {
            skill += arr[i];
            c++;
        }
        else break;
    }
    cout << c;
}