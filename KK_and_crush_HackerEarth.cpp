#include <iostream>
using namespace std;
int main() 
{
	short t,k;
	int n,i;
	cin>>t;
	for (int l=1;l<=t;l++) {
		cin>>n;
		int a[n],b[10000000]={0};
		for (i=0;i<n;i++) {
			cin>>a[i];
			if (a[i]>=0) b[a[i]]=1;
			else b[a[i]+1000000]=1;
		}
		cin>>k;
		int x[k];
		for (i=0;i<k;i++) {
			cin>>x[i];
		}
		for (i=0;i<k;i++) {
			if (x[i]>=0) {
				if (b[x[i]]==1) cout<<"Yes"<<endl;
				else cout<<"No"<<endl;
			}
			else {
				if (b[x[i]+1000000]==1) cout<<"Yes"<<endl;
				else cout<<"No"<<endl;
			}
		}
	}
	return 0;
}
