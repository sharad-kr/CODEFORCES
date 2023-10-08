// "https://codeforces.com/contest/1882/problem/A"
#include<bits/stdc++.h>
// p
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n ;
		cin>>n;

		vector<int> g;
		for(int i = 0 ; i<n ;  i++){
			int elm;
			cin>>elm;
			g.push_back(elm);
		}
		// vector<int> ans;
		int i = 1;
		int j = 0;
		int k = 0;
		int min_val=0;
		while(k<n && j<g.size()){
			if(g[j]!=i){
				// ans.push_back(i);
				i++;k++;j++;
				
			}
			else{
				i++;
			}
		}
		if(k!=n){
			while(k!=n){
				i++;k++;
			}
		}

		cout<<i-1<<endl;

	}
}
