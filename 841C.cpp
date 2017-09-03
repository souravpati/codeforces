#include<bits/stdc++.h>
using namespace std;


vector<int> a;
vector<pair<int,int>> b;

int main(){
	int x,m;
	cin>>m;
	int ans[m];
	for(int i=0;i<m;i++){
		cin>>x;
		a.push_back(x);
	}
	for(int i=0;i<m;i++){
		cin>>x;
		b.push_back({x,i});
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end(),[](auto &left, auto &right){
		return left.first > right.first;
	});
	for(int i=0;i<m;i++){
		ans[b[i].second] = a[i];
	}
	for(int i=0;i<m;i++){
		cout<<ans[i]<<" ";
	}
	cout<<"\n";
	return 0;
}