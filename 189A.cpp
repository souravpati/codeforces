//http://codeforces.com/problemset/problem/189/A

#include </bits/stdc++.h>
using namespace std;

#define ll long long int

ll dp[4005];

int main()
{
	int n,a,b,c;
	cin>>n>>a>>b>>c;
	dp[0]=0;
	for(int i=1;i<=n;i++){
		dp[i] = INT_MIN;

		if(i>=a) dp[i] = max(dp[i-a]+1,dp[i]);
		if(i>=b) dp[i] = max(dp[i-b]+1,dp[i]);
		if(i>=c) dp[i] = max(dp[i-c]+1,dp[i]);
	}
	cout<<dp[n];
	return 0;
}