#include<bits/stdc++.h> 
using namespace std;
const int N=1e5+3;
int n,m;
const int INF = 1e9;

int main(){

    cin>>n>>m;
    vector<vector<int>> edges;
    vector<int> dist(n,INF);
	
	for(int i=0;i<m;i++){
		int u,v,w;
		cin>>u>>v>>w;
		edges.push_back({u,v,w});
		
    }
    
    int source;
    cin>>source;
    dist[source]=0;
    
    for(int iter=0;iter<n-1;iter++){
	
		
		for(auto it: edges){
			int u=it[0];
			int v=it[1];
			int w=it[2];
			dist[v]=min(dist[v],w+dist[u]);
				
		}
	}
	
	for(auto i:dist){	
		cout<<i<<" ";
	}
	
	return 0;
}
