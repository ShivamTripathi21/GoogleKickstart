#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)

using namespace std;


int main(){

	int t;
	cin>>t;
	for(int x=0; x<t; x++){
		int r, c;
		cin>>r>>c;
		cin.ignore();
		int **A = new int*[r];
		for(int i=0; i<r; i++){
			A[i] = new int[c];
		}
		for(int i=0; i<r; i++){
			for(int j=0; i<c; j++){
				cin.getline(A[i][j]);
			}
		}
		

		for(int i=0; i<r; i++){
			for(int j=0; i<c; j++){
				cout<<A[i][j]<<" ";
			}
			cout<<endl;
		}
	
	}

	return 0;
}