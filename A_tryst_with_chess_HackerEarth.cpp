#include <iostream>
using namespace std;
short n,final[10][10];
void move_knight(int i, int j, int id) {
    if (i<0||i>9||j<0||j>9) return;
    if (id==n) {
        final[i][j]=1;
        return;
    }
    move_knight(i-2,j-1,id+1);
    move_knight(i-2,j+1,id+1);
    move_knight(i-1,j-2,id+1);
    move_knight(i+1,j-2,id+1);
    move_knight(i-1,j+2,id+1);
    move_knight(i+1,j+2,id+1);
    move_knight(i+2,j-1,id+1);
    move_knight(i+2,j+1,id+1);
}
int main()
{
    short x,y,solution=0;
    cin>>x>>y>>n;
    x-=1;y-=1;
    move_knight(x,y,0);
    for (short i=0;i<10;i++) {
        for (short j=0;j<10;j++) {
            if (final[i][j]==1) {
                solution++;
            }
        }
    }
    cout<<solution;
    return 0;
}

