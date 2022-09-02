//topological sort-only DAG is valid topological sort
#include<bits/stdc++.h> 
using namespace std;
const int N=1e5+2;



int main(){
	int n,m;
	cin>>n>>m;
	
	vector<vector<int>> adjl(n);
	vector<int> indeg(n,0);
	
	for(int i=0;i<m;i++){
	    int u,v;
		cin>>u>>v;
		//u--->v
		adjl[u].push_back(v);
		
		indeg[v]++;		
	}
	
	queue<int> q;
	for(int i=0;i<n;i++){
		if(indeg[i]==0){
			q.push(i);
		}
	}
		
	while(!q.empty()){
		
		int x=q.front();
		q.pop();
		cout<<x<<" ";
		for(int it:adjl[x]){
			indeg[it]--;
			if(indeg[it]==0){
				q.push(it);
			}
		}
	}
	
	
	return 0;
}
 