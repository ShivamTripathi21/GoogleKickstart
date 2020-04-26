#include<iostream>
#define MAX 1000
using namespace std;

int main(){

    long int hashmap[MAX][MAX];

    cout<<"Enter number : "<<endl;
    int n;
    cin>>n;
    for(int i=0; i<=n; i++) hashmap[i][0] = 1;
    for(int j=0; j<=n; j++) hashmap[j][j] = 1;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            hashmap[i][j] = hashmap[i-1][j-1] + hashmap[i-1][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<hashmap[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
