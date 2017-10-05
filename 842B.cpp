#include<bits/stdc++.h>
using namespace std;
# define ll long long

ll x,y,r;

int main(){
	ll ra,d,n,ans=0;
	cin>>ra>>d;
	d=ra-d;
	cin>>n;
	while(n--){
		cin>>x>>y>>r;
		ll a = (x*x+y*y);
//		if(2*r>(ra-d))
//			continue;
		ll l=(d+r)*(d+r);
		ll p=(ra-r)*(ra-r);
		if(a>=l && a <=p)
			ans++;
//		cout<<p<<" ";
	}
	cout<<ans<<"\n";
	return 0;
}