#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main(){
	int k,c[26],m=0;
	cin>>k;
	for(int i=1;i<=k;i++){
		cin>>c[i];
		m=max(m,c[i]);
	}
	cout<<max(0,m-25);
	return 0;
}