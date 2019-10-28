/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a;double b;
    cout <<"Nhap 1 so nguyen duong: ";cin>>a;
    b=sqrt(a);
    if ((b-(int)b)==0) cout<<"Do la 1 so chinh phuong!";
    else cout <<"Do khong phai la 1 so chinh phuong!";
    return 0;
}
