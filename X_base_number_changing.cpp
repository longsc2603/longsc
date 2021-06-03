#include <bits/stdc++.h>
using namespace std;
long long i, t, n, k, sum[10000], countt;

long long tinh(long long num)
{
    if (num<k) return 1;
    else 
    {
        int j=1;
        countt=1;
        while (num>=pow(k,j))
        {
            countt++;
            j++;
        }
    }
    return countt;
}

int main()
{
    cin>>t;
    for (int j=0; j<t; j++)
    {
        cin>>n>>k;
        sum[j] = 0;
        for (i=0; i<=n; i++)
        {
            sum[j]+=tinh(i);
        }
    }
    for (int j=0; j<t; j++)
    {
        cout<<sum[j]<<endl;
    }
    return 0;
}
