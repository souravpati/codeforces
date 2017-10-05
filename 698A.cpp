#include<bits/stdc++.h>
using namespace std;


int dp1[105], dp2[105];
int main(){
	int n,a;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a==0){
			dp1[i+1]=min(dp1[i]+1,dp2[i]+1);
			dp2[i+1]=min(dp1[i]+1,dp2[i]+1);
		}
		if(a==1){
			dp1[i+1]=min(dp1[i]+1,dp2[i]+1);
			dp2[i+1]=min(dp1[i],dp2[i]+1);
		}
		if(a==2){
			dp1[i+1]=min(dp1[i]+1,dp2[i]);
			dp2[i+1]=min(dp1[i]+1,dp2[i]+1);
		}
		if(a==3){
			dp1[i+1]=min(dp1[i]+1,dp2[i]);
			dp2[i+1]=min(dp1[i],dp2[i]+1);
		}

	}
	cout<<min(dp1[n],dp2[n])<<"\n";
	return 0;
}