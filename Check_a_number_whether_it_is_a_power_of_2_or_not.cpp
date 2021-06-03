#include <iostream>
using namespace std; 
bool is_power_of_2();
int main()
{
    cout<<"Check a number whether it is a power of 2 or not: ";
    if(is_power_of_2()) cout<<"Yes";
    else cout<<"No";
    return 0;
}
bool is_power_of_2() {
    int n;
    cin>>n;
    if (n==0) return false;
    return ((n&(n-1))==0);
}
