#include<bits/stdc++.h>
using namespace std;

int d[100005],h[100005];

int main(){
	int n,m,x,flag=0;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>d[i]>>h[i];
	}
	int ans=max(h[0]+d[0]-1,n-d[m-1]+h[m-1]);
	for(int i=1;i<m;i++){
		if(abs(h[i]-h[i-1]) <=abs(d[i]-d[i-1])){
			x = (d[i]-d[i-1]+(h[i]+h[i-1]))/2;
		}
		else{
			flag=1;
			break;
		}
		ans=max(ans,x);
	}
	if(flag==1){
		cout<<"IMPOSSIBLE"<<"\n";

	}
	else
		cout<<ans<<"\n";
	return 0;
}