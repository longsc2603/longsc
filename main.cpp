/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int a,b,d;
    string c;
    srand((int)time(0));
    a= 100+rand()%901;
    b= 100+rand()%901;
    d= a+b;
    cout<<" "<<a<<endl;
    cout<<"+"<<b<<endl;
    cout<<"-----"<<endl;
    cout<<"Press Enter to see the answer ...";getline(std::cin,c);
    cout<<" "<<a<<endl;
    cout<<"+"<<b<<endl;
    cout<<"="<<d;
    return 0;
}
