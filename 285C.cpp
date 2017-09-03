#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){

	ll n;
	cin>>n;
	ll a[n],ans=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	} 
	sort(a,a+n);
	for(int i=0;i<n;i++){
		ans+=abs(a[i]-(i+1));
	}
	cout<<ans<<"\n";
	return 0;
}