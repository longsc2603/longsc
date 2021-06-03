#include <iostream>
using namespace std;
int main() {
	short T,n,i,j,p,q;
	int dem;
	cin>>T;
	for (short t=0; t<T; t++) {
		cin>>n;
		dem=0;
		short M[n][n];		// Declare (n x n) matrix 
		for (j=0; j<n; j++) {
			for (i=0;i<n;i++) {
				cin>> M[i][j];		// Get the values for elements in array
			}
		}			
		for (j=0; j<n; j++) {
			for (i=0; i<n; i++) {
				for (q=j; q<n; q++) {
					for (p=i; p<n; p++) {
						if (M[i][j]>M[p][q]) dem++;
					}
				}
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}