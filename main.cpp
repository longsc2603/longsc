#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int a[10],x;
    cout<<"Đây là dãy 10 số tự nhiên trong khoảng từ 10-19 :"<<endl;
    srand((int)time(0));
    for (int i=0;i<=9;i++) {
        a[i]=10+rand()%10;     //Random 10 số
    }
    for (int i=0;i<=9;i++) {
        cout<<a[i]<<" ";
    }
    for (int n=8;n>=0;n--) {
        for (int i=0;i<=n;i++) {
            if (a[i]>a[i+1]) {
                x=a[i];
                a[i]=a[i+1];
                a[i+1]=x;
            }
        }
    }
    cout<<endl<<"Dãy đã sắp xếp : "<<endl;
    for (int i=0;i<=9;i++) {
        cout<<a[i]<<" ";
    }
    return 0;
}