#include <iostream>
using namespace std;
int main()
{
    int t,i;
    cin>>t;bool game;
    long int a[t];
    for (i=0;i<t;i++) {
        cin>>a[i];
    }
    int min = a[0],max=a[0];
    for (i=1;i<t;i++) {
        if (a[i]<min) min=a[i];
        if (a[i]>max) max=a[i];
    }
    for (i=2;i<=min;i++) {
        for (int x=0;x<t;x++) {
            if (a[x]%i!=min%i) {
                game=false;
                break;
            } 
            else game= true;
        }
        if (game==true) cout<<i<<" ";
    }
    for (i=min+1;i<max;i++) {
        for (int x=0;x<t;x++) {
            if (a[x]%i!=min) {
                game=false;
                break;
            }
        }
        if (game==true) cout<<i<<" ";
    }
    return 0;
}
