#include <iostream>
#define rep(i,n) for(int i=0; i<n; i++)
using namespace std;


void swap(int &a, int &b){
	int k = b;
	b = a;
	a = k;
	return;
}

void MaxHeapify(int *A, int position, int n){
	//position = position-1;
	int largest;
	int l = 2*position + 1;
	int r = 2*position + 2;
	if( l <=n && A[l]>A[position]) largest = l;
	else largest = position;
	if(r <= n && A[r]>A[largest]) largest = r;
	if(largest != position){
		swap(A[position], A[largest]);
		MaxHeapify(A, largest, n);
	}
	
}

void printHeap(int arr[], int n) 
{ 
    cout << "Array representation of Heap is:\n"; 
  
    for (int i = 0; i < n; ++i) 
        cout << arr[i] << " "; 
    cout << "\n"; 
} 

int main(){

	//An array structure 
	int n;
	cin>>n;

	int *A = new int [n];
	rep(i, n)cin>>A[i];
	// tree representation of array
	/*
                       A[1]
                  A[2]        A[3]
             A[4]     A[5]A[6]   A[7]
	
	Root of tree :  fist element i==1
	Parent(i) = i/2
	left(i) = 2i, right(i) =  2i + 1
	
	//Max Heap : key of node >= keys of its children
	//MIn Heap : key of node <= keys of its children

	*/
	printHeap(A,n);
	for(int i=(n/2)-1; i>=0; i--){
		MaxHeapify(A, i, n);
	}

	printHeap(A,n);

	return 0;
}
