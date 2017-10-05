#include<bits/stdc++.h>
using namespace std;
#define ll long long


vector<int> v;
int main(){
	int n,x;
	cin>>n>>x;
	if(n==2 && x==0){
		cout<<"NO\n";
		return 0;
	}

	int w=n%2?n-1:n-2;
	int ans=0;
	for(int i=1;i<=w;i++){
		ans^=(400000+i);
		v.push_back(400000+i);
		if(i==w && ans==x){
			ans^=(400000+i);
			v.pop_back();
			ans^=(400000+i+1);
			v.push_back(400000+i+1);
		}
	}
	if(w==n-2)
		v.push_back(0);
	v.push_back(ans^x);

	cout<<"YES\n";
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	return 0;
}