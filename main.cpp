#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int a[10],i;
    cout<<"Đây là dãy 10 số tự nhiên trong khoảng từ 10-19 :"<<endl;
    srand((int)time(0));
    for (i=0;i<=9;i++) {
        a[i]=10+rand()%10;     //Random 10 số
    }
    for (i=0;i<=9;i++) {
        cout<<a[i]<<" ";
    }
    for (i=0;i<=8;i++) {
        for (int n=i+1;n<=9;n++) {
            if (a[i]>a[n]) swap(a[i],a[n]);
        }
    }
    cout<<endl<<"Dãy đã sắp xếp : "<<endl;
    for (int i=0;i<=9;i++) {
        cout<<a[i]<<" ";
    }
    return 0;
}
