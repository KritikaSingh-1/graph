#include<bits/stdc++.h> 
using namespace std;
const int N=1e5+2;

bool iscycle(int src,vector<vector<int>> &adjl,vector<bool> &vis,int parent){
	vis[src]=true;
	for(auto i:adjl[src]){
		if(i!=parent){
			if(vis[i]){
				return true;
			}
			if(!vis[i] and iscycle(i,adjl,vis,src)){
				return true;
			}
		}
	}
	return false;
}

int main(){
	int n,m;
	cin>>n>>m;
	
	vector<vector<int>> adjl(n);
	vector<bool> vis(n,0);
	
	for(int i=0;i<m;i++){
	    int u,v;
		cin>>u>>v;
		//u--->v
		adjl[u].push_back(v);
		adjl[v].push_back(u);
				
	}
	bool cycle=false;
	for(int i=0;i<n;i++){
		if(!vis[i] and iscycle(i,adjl,vis,-1)){
			cycle=true;
		}
	}
	
	if(cycle){
		cout<<"cycle is present";
	}
	else{
		cout<<"Cycle is not present";
	}
	

	
	
		
	return 0;
}
 