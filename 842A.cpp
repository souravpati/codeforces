#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll l,r,x,y,k;
int main(){
	cin>>l>>r>>x>>y>>k;
	for(ll i=x;i<=y;i++){
		if(k*i>=l && k*i<=r)
			{cout<<"YES";return 0;}
		else if (k*i>r)
			{cout<<"NO";return 0;}
	}	
	cout<<"NO";
	return 0;
}