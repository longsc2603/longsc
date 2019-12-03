#include <iostream>
using namespace std;
int main()
{
    int a=2,m,n=2;
    bool b;
    cin>>m;
    if (m<2||m>999) cout<<"Số không hợp lệ !";
    if (m==2)cout<<2;
    while (n<=m) {
        while (a<n) {
            if (n%a==0) {
            b=true;
            break;
            }
            else b=false;
            a++;
        }
        if (b==false)cout<<n<<" ";
        n++;
        a=2;
    }
    return 0;
}

