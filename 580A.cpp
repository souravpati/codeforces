//http://codeforces.com/problemset/problem/580/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
	int n,m=1,mx=1;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i==0)continue;
		if(a[i]>=a[i-1]) m++;
		else m=1;
		mx=max(m,mx);
	}
	cout<<mx;
	return 0;
}