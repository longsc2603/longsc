#include <bits/stdc++.h>
using namespace std;

long long a[100000], dp[100000], N, i, maxn;

int main()
{
    cin>>N;
    for (i=0; i<N; i++)
    {
        cin>>a[i];
        dp[i] = 1;
    }
    for (i=1; i<N; i++)
    {
        for (long long j=0; j<i; j++)
        {
            if (a[i]>a[j]) dp[i] = max(dp[i], dp[j]+1);
        }
    }
    maxn = dp[0];
    for (i=1; i<N; i++)
    {
        if (maxn<dp[i]) maxn = dp[i];
    }
    cout<<maxn;
    return 0;
}
