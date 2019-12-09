#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int a[10],x,i;
    srand((int)time(0));
    for ( i=0;i<=9;i++) {
        a[i]=10+rand()%10;
    }
    cout<<"Đây là dãy 10 số trong khoảng từ 10-19 : "<<endl;
    for (int i=0;i<=9;i++) {
        cout<<a[i]<<" ";
    }
    for (i=0;i<=8;i++) {
        if (a[i] >a[i+1]) {
            for (int n=0;n<=i;n++) {
                if (a[i+1]<a[n]) {
                    x=a[i+1];
                    for (int c=i+1;c>=n;c--) {
                        a[c]=a[c-1];
                    }
                    a[n]=x;
                    break;
                }
            }
        }
    }
    cout<<"\nDãy đã sắp xếp\n";
    for(i=0;i<=9;i++) {
        cout<<a[i]<<" ";
    }
    return 0;
}
