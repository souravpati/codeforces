#include<bits/stdc++.h>
using namespace std;

int a[101],h[101];

int main(){
	int n;
	cin>>n;
	int b,c;
	while(n--){
		cin>>b>>c;
		h[b]++;
		a[c]++;
	}
	int ans=0;
	for(int i=1;i<=100;i++){
		ans+=a[i]*h[i];
	}
	cout<<ans<<"\n";
	return 0;
}