
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
vector<int> adjl[N];

int main(){
	int n,m;
	cin>>n>>m;
	vector<vector<int>> adj(n+1,vector<int>(n+1,0));
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		
		adj[x][y]=1;
		adj[y][x]=1;
	}
	cout<<"Adjacency matrix of above graph is given by:"<<endl;
	for(int i=1;i<n+1;i++){
		for(int j=1;j<n+1;j++){
			cout<<adj[i][j]<<" ";
		}
		cout<<endl;
	}
	
	if(adj[3][7]==1){
		cout<<"there is a edge"<<endl;
	}
	else{
		cout<<"no edge"<<endl;
	}
	
	cout<<endl;
	
	cin>>n>>m;
	for(int i=0;i<m;i++){
	    int x,y;
		cin>>x>>y;
		adjl[x].push_back(y);
		adjl[y].push_back(x);	
		
	}
	cout<<"adjacency list "<<endl;
	for(int i=1;i<n+1;i++){
		cout<<i<<"->";
		vector<int> :: iterator it;
	    for(it=adjl[i].begin();it!=adjl[i].end();it++){
		     cout<<*it<<" ";
     	}
     	cout<<endl;
	}
	
	return 0;
}
 