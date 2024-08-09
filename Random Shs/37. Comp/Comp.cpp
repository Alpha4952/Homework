#include <bits/stdc++.h>
using namespace std;

int n, F[1000005];
void snto()
{
    fill(F, F + 1000003, 1);
    F[0] = 1;
    F[1] = 1;
    for (int i = 2; i*i <= 1000003; i++)
    {
        if (F[i] == 1) for (int j = i * i; j <= 1000003; j += i) F[j] = 0;
    }
}
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    freopen("Comp.INP","r",stdin);
    freopen("Comp.OUT","w",stdout);
    cin >> n;
    snto();
    for (int i = 1; i <= n / 2; i++)
    {
        if (F[i] == 0 && F[n - i] == 0)
        {
            cout << i << " " << n - i;
            return 0;
        }
    }
}
