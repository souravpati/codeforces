#include<bits/stdc++.h>
using namespace std;

int a[505],b[505];
int main(){
	int n,k;
	
	cin>>n>>k;
	a[0]=b[0]=k;
	for(int i=1;i<=n;i++){
		cin>>a[i];

	}
	a[n+1]=b[n+1]=k;
	for(int i=1;i<=n;i++){
		b[i]=max(a[i],k-b[i-1]);
	}
	
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=b[i]-a[i];
	}
	cout<<sum<<endl;
	for(int i=1;i<=n;i++){
		cout<<b[i]<<" ";
	}
	cout<<endl;
	return 0;
}