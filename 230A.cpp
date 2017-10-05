#include<bits/stdc++.h>
using namespace std;


vector<pair<int,int>> v;

int main(){
	int s,n,i,x,y;
	cin>>s>>n;
	
	for(i=0;i<n;i++){
		cin>>x>>y;
		v.push_back({x,y});	
	}
	sort(v.begin(),v.end(), [](auto &left, auto &right){
		return left.first<right.first;
	});
	for(i=0;i<n;i++){
		if(s>v[i].first)
			s+=v[i].second;
		else
			break;
	}
	if(i==n)
		cout<<"YES\n";
	else
		cout<<"NO\n";

}