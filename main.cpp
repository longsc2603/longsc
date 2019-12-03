using namespace std;
#include <iostream>
int main()
{
    cout<<"In ra day Fibonacci co n chu so. Nhap n :";
    int n,num1,num2,num3,a;
    cin>>n;
    num1=1,num2=1,a=3;
    if (n<1) cout<<"Loi !";
    else if (n==1)cout<<"1";
    else cout<<"1 1";
    while (a<=n) {
        num3=num1+num2;
        cout<<" "<<num3;
        num1=num2;
        num2=num3;
        a++;
    }
    return 0;
}
