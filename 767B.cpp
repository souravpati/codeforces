#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll a[100005];

int main()
{
	ll ts,tf,t;
	cin>>ts>>tf>>t;
	int n;
	ll start=ts,q=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int i=1;
	ll tim = a[1]-1,dist=start-a[1]+1; 
//	if(dist<=0){cout<<tim;return 0;}
	while(start<tf){
		if(dist<=0){cout<<tim;return 0;}
		if(i>n) break;
		while(a[i]<=start && i<=n){
			q++;
			i++;
		}
		if(q==0){tim=start;start=tf;break;}
		start= start + q*t;
		if(i<=n){
			int dist2=start-a[i]+1;
			
			if(dist2<dist){
				dist=dist2;
				tim= a[i]-1;
			}

		}

	}
	cout<<tim;
	return 0;
}