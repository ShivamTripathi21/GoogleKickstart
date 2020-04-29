#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)

using namespace std;

bool compare(string x, string y) 
{ 
    for (int i = 0; i < min(x.size(), y.size()); i++) { 
        if (x[i] == y[i]) 
            continue; 
        else if(x[i] < y[i]) return true; 
        else return false;
    }  
} 

int main(){

	int t;
	cin>>t;
	for(int x=0; x<t; x++){
		int n;
		cin>>n;
		cin.ignore();
		vector<string> s;

		string cs = "";
		int csize = 0; 
		rep(i, n){
			string str;
			getline(cin, str);
			s.push_back(str);
			
			map<char, int> mmap;
			for(int i=0; i<str.length(); i++){
				if(mmap[str[i]] == 0)mmap[str[i]] = 1;
				else mmap[str[i]] = mmap[str[i]] + 1;
			}

			if(mmap.size()>csize){
				csize = mmap.size();
				cs = str;
			}
			else if(mmap.size() == csize){
				csize = mmap.size();
				if(!compare(cs, str)) cs = str;
			}
		}
		cout<<cs<<endl;
	}

	return 0;
}