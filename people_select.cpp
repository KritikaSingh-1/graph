#include<bits/stdc++.h> 
using namespace std;
const int N=1e5+2;
int n,m;	
vector<vector<int>> adjl;
vector<int> components;
vector<bool> vis;

int get_comp(int idx){
	if(vis[idx]){
		return 0;
	}
	vis[idx]=true;
	int ans=1;
	for(auto i:adjl[idx]){
		if(!vis[i]){
			ans+=get_comp(i);
			vis[i]=true;
		}
	}
	return ans;
}


int main(){
	cin>>n>>m;
	adjl=vector<vector<int>>(n);
     vector<int> components;
    vis=vector<bool>(n,0);
	for(int i=0;i<m;i++){
	    int u,v;
		cin>>u>>v;
		//u--->v
		adjl[u].push_back(v);
		adjl[v].push_back(u);
			
	}
	
	for(int i=0;i<n;i++){
		if(!vis[i]){
			components.push_back(get_comp(i));
		}
	}
	for(auto i:components){
		cout<<i<<" ";
	}
	long long ans=0;
    for(auto i:components){
	    ans+=i*(n-i);
    }
	cout<<ans/2;
	
	return 0;
}
 