#include <bits/stdc++.h>

#define rep(i,n) for(int i=0; i<n; i++)
#define repA(i, a, n) for(int i=1; i<=n; i++)
#define MAX 10000

using namespace std;
map<int, map<int, int> > m;

int length(int i, int j, char* X){
    if(i == j) return 1;
    if(X[i] == X[j]){
        if(i+1 == j) return 2;
        else return 2 + length(i+1, j-1, X);
    }
    else{
        return max(length(i+1, j, X), length(i, j-1, X));
    }
}

int lengthDP(int i, int j, char* X){
    if(m[i][j] == 0){
        if(i == j) m[i][j] = 1;
        if(X[i] == X[j]){
            if(i+1 == j) m[i][j] = 2;
            else{
                m[i][j] = 2 + lengthDP(i+1, j-1, X);
            }
        }
        else{
            m[i][j] = max(length(i+1, j, X), length(i, j-1, X));
        }
    }
    else{
        return m[i][j];
    }
}

// Longes palindrome in string
int main(){

    int n;
    cin>>n;

    char *A = new char[n];
    rep(i,n) cin>>A[i];
    int l = length(0,n-1,A);
    int lDP = lengthDP(0,n-1,A);
    cout<<"Longest Palindrome : "<<l<<" DP: "<<lDP<<endl;
    //L[i,j]

    //example 15 oacbbckjhjkcbpo 7


    return 0;
}

