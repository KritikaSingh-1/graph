#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
vector<int> adjl[N];
bool vis[N]={0};


void dfs(int node){
	//preorder
	vis[node]=1;
	
	//inorder
	vector<int> :: iterator it;
	for(it=adjl[node].begin();it!=adjl[node].end();it++){
		if(vis[*it]);
		else{
			dfs(*it);
		}
	}
	
	//postorder
	cout<<node<<" ";
	
}

int main(){
	int n,m;
	
	cin>>n>>m;
	for(int i=0;i<m;i++){
	    int x,y;
		cin>>x>>y;
		adjl[x].push_back(y);
		adjl[y].push_back(x);	
		
	}
	
	dfs(1);
	return 0;
}
 