#include<bits/stdc++.h> 
using namespace std;
const int N=1e5+2;
int n,m;	
vector<vector<int>> adjl;
vector<int> components;
vector<bool> vis;
vector<int> col;
bool bipart=true;

void color(int u,int curr){
	if(col[u]!=-1 and col[u]!=curr){
		bipart=false;
		return;
	}
	col[u]=curr;
	if(vis[u]){
		return;
	}
	vis[u]=true;
	for(auto i:adjl[u]){
		color(i,curr xor 1);
	}

}

int main(){
	cin>>n>>m;
	adjl=vector<vector<int>>(n);
    vis=vector<bool>(n,0);
    col=vector<int>(n,-1);
	for(int i=0;i<m;i++){
	    int u,v;
		cin>>u>>v;
		//u--->v
		adjl[u].push_back(v);
		adjl[v].push_back(u);
			
	}
    for( int i=0;i<n;i++){
    	if(!vis[i]){
    		color(i,0);
		}
		
	}
	if(bipart){
		cout<<"graph is bipart"<<endl;
	}
	else{
		cout<<"graph is not bipart"<<endl;
	}
	
	return 0;
}
 