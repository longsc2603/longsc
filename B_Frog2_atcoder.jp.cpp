#include <bits/stdc++.h>
using namespace std;

const int maxnum = 1e6;

long long N, h[maxnum], dp[maxnum];

int main()
{
    int K;
    cin>>N>>K;
    for (long long i=0; i<N; i++)
    {
        cin>>h[i];
    }
    dp[0]=0;
    dp[1]=abs(h[1]-h[0]);
    for (long long i=2; i<N; i++)
    {
        if (K==1) 
        {
            dp[i]=dp[i-1]+abs(h[i]-h[i-1]);
            continue;
        }
        dp[i]=min(dp[i-1]+abs(h[i]-h[i-1]), dp[i-2]+abs(h[i]-h[i-2]));
        for (int j=2; j<K && i-(j+1)>=0; j++)
        {
            dp[i]=min(dp[i], dp[i-(j+1)]+abs(h[i]-h[i-(j+1)]));
        }
    }
    cout<<dp[N-1];
    return 0;
}


