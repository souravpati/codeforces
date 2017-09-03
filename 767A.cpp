#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int b[100005];

int main()
{
	int n;
	cin>>n;
	int a[n+1];
	int m=n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[a[i]]++;
		while(b[m]==1){
			cout<<m<<" ";
			m--;
		}
		cout<<endl;
	}
	return 0;
}