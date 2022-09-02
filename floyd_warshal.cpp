#include<bits/stdc++.h> 
using namespace std;


int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<char>> A(n,vector<char>(m));
    
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		cin>>A[i][j];
		}
	}
    
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		if(i==0 || i==n-1 || j==0 || j==m-1){
    			if(A[i][j] == 'O'){
    				A[i][j]='*';
				}
			}
		}
	}
    
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		if(A[i][j]=='O'){
    				A[i][j]='X';
				}
		}
	}
    
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		if(A[i][j]=='*'){
    			A[i][j]='O';
			}
		}
	}
    
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
    
	return 0;
}
