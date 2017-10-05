#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back


int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int dp[2][n];

	dp[0][n-1] = a[n-1];
	dp[1][n-1] = 0;
	for(int i=n-2;i>=0;i--){
		dp[0][i]=max(dp[0][i+1], a[i]+dp[1][i+1]);
		dp[1][i]=min(dp[0][i+1], a[i]+dp[1][i+1]);
	}
	cout<<dp[1][0]<<" "<<dp[0][0];
	return 0;
}