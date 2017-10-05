#include<bits/stdc++.h>
using namespace std;
#define ld long double
vector<int> vec[100004];




ld dfs(int v, int p){
	ld sum = 0;
	for(auto u : vec[v])
		if(u != p)
			sum += dfs(u, v) + 1;
	return sum ? sum / (vec[v].size() - (p != -1)) : 0;
}

int main(){
	int n,x,y;
	cin>>n;
	for(int i=0;i<n-1;i++){
		cin>>x>>y;
		vec[x].push_back(y);
		vec[y].push_back(x);

	}
	
	double ans=dfs(1,-1);
	cout<<fixed<<setprecision(15)<<ans;
	return 0;
}