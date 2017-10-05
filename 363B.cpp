#include<bits/stdc++.h>
using namespace std;

int a[1000000],c[1000000];

int main()
{
	int n,k,pos=0;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	c[0]=a[0];
	for(int i=1;i<n;i++){
		c[i]=c[i-1]+a[i];
	}
	int mn = c[k-1];
	for(int i=k;i<n;i++){
		if(c[i]-c[i-k] < mn){
			pos = i-k+1;
			mn = c[i]-c[i-k];
		}
	}
	cout<<pos+1<<"\n";
	return 0;
}