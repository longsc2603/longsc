#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a,b,c,delta;
    cout<<"Đây là chương trình giải phương trình bậc II 1 ẩn dạng ax^2 + bx + c = 0 !"<<endl;
    cout<<"Nhập a : ";cin>>a;
    cout<<"Nhập b : ";cin>>b;
    cout<<"Nhập c : ";cin>>c;
    if (a==0){
        if (b==0){
            if (c==0) cout<<"Phương trình có vô số nghiệm !";
            else cout<<"Phương trình vô nghiệm !";
        }
        else cout<<"Nghiệm của phương trình là : "<<-c/b;
    } 
    else { 
        delta = b*b - 4*a*c;
        if (delta>0)cout<<"Phương trình có 2 nghiệm là : "<<(-b-sqrt(delta))/(2*a)<<" và "<<(-b+sqrt(delta))/(2*a);
        if (delta==0)cout<<"Phương trình có nghiệm kép là : "<<-b/(2*a);
        if (delta<0)cout<<"Phương trình vô nghiệm !";
        }
    return 0;
}
