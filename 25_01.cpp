#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define pb push_back
vector<ll> a;
int main()
{
	ios::sync_with_stdio(0);
	int flag=0;
	ll n,k,i,kth=0;
	cin>>n>>k;
	for(i=1;i<=sqrt(n);i++){
		if(n%i==0) {
			kth++;
			a.pb(i);
		}
		if(i*i==n)flag=1;
//		cout<<kth<<"\n";
		if(kth==k) break;
	}
//	cout<<kth<<"\n";
	if(flag==1 && (kth*2)<=k)cout<<-1;

	else if((kth*2)<k) cout<<-1;
	else if(kth==k) cout<<a[kth-1];
	else if(flag == 1){
		i=(2*kth)-k-1;
		cout<<n/a[i];
	}
	else 
		{i=(2*kth)-k;
			cout<<n/a[i];
	}
//	else cout<<;

}