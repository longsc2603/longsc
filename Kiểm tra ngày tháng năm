#include <iostream>
using namespace std;
int main()
{
    int ngay, thang, nam;
    double a;
    cout<<"Nhập năm: ";
    cin>>nam;
    a=nam/4.0;
    cout<<"Nhập tháng: ";
    cin>>thang;
    cout<<"Nhập ngày: ";
    cin>>ngay;
    if ((thang==1||thang==3||thang==5||thang==7||thang==8||thang==10||
    thang==12)&&ngay>0&&ngay<32)cout<<"Ngày tháng năm hợp lệ!";
    else if ((thang==4||thang==6||thang==9||thang==11)&&ngay>0&&ngay<31)cout<<"Ngày tháng năm hợp lệ!";
    else if (thang==2&&ngay>0&&ngay<30&&(a-(int)a==0))cout<<"Ngày tháng năm hợp lệ!";
    else if (thang==2&&ngay>0&&ngay<29)cout<<"Ngày tháng năm hợp lệ!";
    else cout<<"Ngày tháng năm không hợp lệ!";
    return 0;
}


