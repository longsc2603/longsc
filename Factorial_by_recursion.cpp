#include <iostream>
using namespace std;
int f(int n) {
    if (n<=1) return 1;
    else return n*f(n-1);
}
int main()
{
    cout<<"Enter a positive integer to find its factorial: ";
    int number;
    long long factorial;
    cin>>number;
    if (number<0) {
        cout<<"Error! Positive integers only!";
        return 0;
    }
    else factorial=f(number);
    cout << factorial;
    return 0;
}
