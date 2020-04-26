#include <iostream>
#define rep(i,n) for(int i=0; i<n; i++)
using namespace std;


int findPeak(int* A, int start, int end){
	int n = end - start + 1;

	if(A[n/2] < A[(n/2)-1]){
		findPeak(A, 0, n/2-1);
	}
	else if(A[n/2] < A[(n/2)+1]){
		findPeak(A, n/2, n-1);
	}
	else{
		return n/2;
	}
}

int main(){

	// one dimention peak finder

	int n;
	cin>>n;

	int* A = new int [n];

	rep(i, n) cin>>A[i];

	int ans = findPeak(A, 0, n-1);

	cout<<"Peak of array is : "<<ans<<endl;

	return 0;
}
