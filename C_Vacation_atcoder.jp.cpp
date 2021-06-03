#include <bits/stdc++.h>
using namespace std;

const int maxnum=1e6;
long long N, a[maxnum][3], dp[maxnum][3];

int main()
{
    cin>>N;
    for (long long i=1; i<=N; i++)
    {
        for (short j=0; j<3; j++)
        {
            cin>>a[i][j];
        }
    }
    for (long long i=1; i<=N; i++)
    {
        for (short j=0; j<3; j++)
        {
            if (j==0) dp[i][j] = max(a[i][j]+dp[i-1][j+1], a[i][j]+dp[i-1][j+2]);
            else if (j==1) dp[i][j] = max(a[i][j]+dp[i-1][j-1], a[i][j]+dp[i-1][j+1]);
            else dp[i][j] = max(a[i][j]+dp[i-1][j-1], a[i][j]+dp[i-1][j-2]);
        }
    }
    long long max = dp[N][0];
    if (max<dp[N][1]) max = dp[N][1];
    if (max<dp[N][2]) max = dp[N][2];
    cout<<max;
    return 0;
}
