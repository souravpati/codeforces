#include<bits/stdc++.h>
using namespace std;


#define ll long long


int main(){
	ll n,k,t;
	cin>>n>>k>>t;
	if(t>=k && t<=n) cout<< k;
	else if(t<k)cout<<t;
	else cout<<n+k-t;
	return 0;
}