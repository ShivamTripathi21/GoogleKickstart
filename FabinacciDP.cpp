#include <bits/stdc++.h>

#define rep(i,n) for(int i=0; i<n; i++)
#define repA(i, a, n) for(int i=1; i<=n; i++)
#define MAX 10000
using namespace std;


int main(){

    int n;
    cin>>n;

    int hashmap[MAX] = {0};
    for(int i=0; i<=n; i++){
        if(i == 0) hashmap[i] = 0;
        else if( i!=0 && i<=2) hashmap[i] = 1;
        else hashmap[i] = (hashmap[i-1] + hashmap[i-2]);
    }
    cout<<"Fibonacci number of "<<n<<" is "<<hashmap[n]<<endl;
    rep(i,n) cout<<hashmap[i]<<endl;
    return 0;
}
