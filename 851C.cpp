#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll v[100][8];
int a[100]; 
int main(){
	ios::sync_with_stdio(0);
	ll n;
	cin>>n;
	if(n>66){

		cout<<0;
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=5;j++){
			cin>>v[i][j];
		}
	}
	ll x[6]={0},y[6]={0},xy=0;
	for(int i=1;i<=n;i++){

		for(int j=1;j<=n-1;j++){
			if(j==i)continue;
			
			for(int k=1;k<=5;k++){
				x[k]=v[j][k]-v[i][k];
				
			}
			
			for(int l=j+1;l<=n;l++){
				if(j==l || l==i)continue;
				xy=0;
				for(int k=1;k<=5;k++){
					y[k]=v[l][k]-v[i][k];
					
					xy+=x[k]*y[k];
				}
				if(xy>0)
					a[i]=1;


			}	
		}
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		if(a[i]==0)ans++;
	}
	cout<<ans<<"\n";
	for(int i=1;i<=n;i++){
		if(a[i]==0)cout<<i<<" ";
	}
	
	return 0;
}