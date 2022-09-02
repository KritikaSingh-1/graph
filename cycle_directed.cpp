#include<bits/stdc++.h> 
using namespace std;
const int N=1e5+2;

bool iscycle(int src,vector<vector<int>> &adjl,vector<bool> &vis,vector<int> &stack)
{
	stack[src]=true;
	if(!vis[src]){
		vis[src]=true;
		for(auto i:adjl[src]){
			if(!vis[i] and iscycle(i,adjl,vis,stack)){
				return true;
			}
			if(stack[i]){
				return true;
			}
		}
	}
	stack[src]=false; 
	
	return false;
}
int main(){
	int n,m;
	cin>>n>>m;
	
	vector<vector<int>> adjl(n);
	
	
	for(int i=0;i<m;i++){
	    int u,v;
		cin>>u>>v;
		//u--->v
		adjl[u].push_back(v);
		
				
	}
	bool cycle=false;
	
	vector<int> stack(n,0);
	vector<bool> vis(n,0);
	for(int i=0;i<n;i++){
		if(!vis[i] and iscycle(i,adjl,vis,stack)){
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
 