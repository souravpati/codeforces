#include<bits/stdc++.h>
using namespace std;
#define ll long long

int a[105];
int main(){
	int n,x,b;
	cin>>n>>x;
	for(int i=0;i<n;i++){
		cin>>b;
		a[b]++;
		
	}
	int ans=0;
	for(int i=0;i<x;i++){
		if(a[i]==0)
			ans++;
	}
	ans+=a[x];
	cout<<abs(ans);
	return 0;

}