#include <bits/stdc++.h>
using namespace std;

const int maxnum = 1e6;

long long N, h[maxnum], dp[maxnum];

int main()
{
    cin>>N;
    for (long long i=0; i<N; i++)
    {
        cin>>h[i];
    }
    dp[0]=0;
    dp[1]=abs(h[1]-h[0]);
    for (long long i=2; i<N; i++)
    {
        dp[i]=min(dp[i-1]+abs(h[i]-h[i-1]), dp[i-2]+abs(h[i]-h[i-2]));
    }
    cout<<dp[N-1];
    return 0;
}
