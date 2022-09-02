#include<bits/stdc++.h> 
using namespace std;
const int N=1e5+3;
int n,m;
const int INF = 1e9;
int cost=0;



int main(){

    cin>>n>>m;
    vector<vector<pair<int,int>>> edges(n+1);
    vector<int> dist(n+1,INF);
	
	for(int i=0;i<m;i++){
		int u,v,w;
		cin>>u>>v>>w;
		edges[u].push_back({v,w});
		edges[v].push_back({u,w});
    }
    int source;
    cin>>source;
    dist[source]=0;
    
    set<pair<int,int>> s;
	s.insert({0,source});
	
	while(!s.empty()){
		auto x=*(s.begin());
		s.erase(x);
		
		for(auto it: edges[x.second]){
			
			if(dist[it.first] > it.second+dist[x.second]){
				s.erase({dist[it.first],it.first});
				dist[it.first]=it.second+dist[x.second];
				s.insert({dist[it.first],it.first});
				
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(dist[i]<INF){
			cout<<dist[i]<<" ";
		}else{
			cout<<-1<<" ";
		}
	}
	
	return 0;
}
 