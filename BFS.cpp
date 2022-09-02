#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
vector<int> adjl[N];
bool vis[N]={0};
int main(){
	int n,m;
	
	cin>>n>>m;
	for(int i=0;i<m;i++){
	    int x,y;
		cin>>x>>y;
		adjl[x].push_back(y);
		adjl[y].push_back(x);	
		
	}
	
	queue<int> q;
	q.push(1);
	vis[1]=true;
	while(!q.empty()){
		int node=q.front();
		q.pop();
		cout<<node<<endl;
		
		vector<int> :: iterator it;
		for(it=adjl[node].begin();it!=adjl[node].end();it++){
			if(!vis[*it]){
				vis[*it]=1;
				q.push(*it);
			}
		}
	}
	
	return 0;
}
 