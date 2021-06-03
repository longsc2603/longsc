#include <iostream>
using namespace std;
int main()
{
    int n,k,i,dem=0;
    cin>>n>>k;
    int a[n];
    for (i=0;i<n;i++) {
        cin>>a[i];
    } 
    if (a[k]>0) {
        for (i=0;a[i]>=a[k];i++) {
            dem++;
        }
        return dem;
    }
    if (a[k]=0) {
        for (i=0;a[i]>0;i++) {
            dem++;
        }
        return dem;
    }
}
