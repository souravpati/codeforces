#include<bits/stdc++.h>
using namespace std;

int a[100005],c[100005];
set<int> b;
int main()
{
	int n,m,input;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		
	}
	for(int i=n-1;i>=0;i--)
	{
		b.insert(a[i]);
		c[i]=b.size();
	}
	for(int i=0;i<m;i++){
		cin>>input;
		cout<<c[input-1]<<"\n";
	}
	return 0;
}