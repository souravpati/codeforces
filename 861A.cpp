#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	ll n,k;
	cin>>n>>k;
	ll s=1;
	for(int i=1;i<=k;i++){
		s*=10;
	}
	for(int i=1;i<=k;i++){
		if(n%5==0)n/=5;
		if(n%2==0)n/=2;
	}
	cout<<n*s;

	return 0;
}