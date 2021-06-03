#include <iostream>
using namespace std;
int main()
{
    int test_case, n, k, c;
    cin>>test_case>>n>>k;
    int a[n];
    c=k%n;
    int resultant_a[n];
    for (int i=0;i<n;i++) {
        cin>> a[i];
    }
    for (int i=0;i<n;i++) {
        resultant_a[(i+c)%n]=a[i];
    }
    for (int i=0;i<n;i++) {
        cout<<resultant_a[i]<<" ";
    }
    return 0;
}
