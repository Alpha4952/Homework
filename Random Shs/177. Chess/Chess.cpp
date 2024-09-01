#include <bits/stdc++.h>
using namespace std;
int a[100005],b[100005],dga[100005],dgb[100005];
int n,kq = 0 ;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    freopen("CHESS.inp","r",stdin);
    freopen("CHESS.out","w",stdout);
    cin >> n;
    for ( int i = 1 ; i <= n ; i++)
    {
        cin >> a[i] >> b[i];
        dga[i] = 0;
        dgb[i] = 0;
    }
    sort (a+1,a+n+1);
    sort (b+1,b+n+1);
    for (int i = 1 ; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (dgb[j] == 0 && a[i] < b[j])
            {
                dga[i] = 1;
                dgb[j] = 1;
                kq += 2;
                break;
            }
        }
    }
    for (int j = 1 ; j <= n ; j++)
    {
        if ( dgb[j] == 0)
        {
            for (int i = 1 ; i <= n ; i ++)
            {
                if (dga[i]==0 && a[i]==b[j])
                {
                    dga[i] = 1;
                    dgb[j] = 1;
                    kq ++;
                    break;
                }
            }
        }
    }
    cout << kq;
    return 0;
}
