#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll a[500005], s[100005], cnt[100005];

int main()
{
	ll n, sum=0, ans=0;
	cin>>n;

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	s[0]=a[0];
	for(int i=1;i<n;i++){
		s[i]=s[i-1]+a[i];

	}
	sum=s[n-1];

	if(sum%3==0){
		for(int i=0;i<n-1;i++){
			cnt[i]=i>0?cnt[i-1]:0;
			if(1.5*s[i]== sum) ans+=cnt[i];
			if(3*s[i] == sum) cnt[i]++;
			
//			cout<<cnt[i]<<" ";
		}
	}
	cout<<ans<<"\n";
	return 0;
}