#include<bits/stdc++.h>
using namespace std;
#define ll long long


vector<int> v[100005];
int color[2];
int visited[100005];

void dfs(int a, int clr){
	visited[a]=1;
	color[clr]++;
	for(int i=0;i<v[a].size();i++){
		int t= v[a][i];
		if(!visited[t])
			dfs(t,clr^1);
	}
}

int main(){
	int n,x,y;
	cin>>n;
	
	for(int i=0;i<n-1;i++){
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	dfs(1,0);
	
	
	cout<<1ll*color[0]*color[1]-(n-1)<<"\n";
	return 0;
}