#include<bits/stdc++.h>
using namespace std;


int x[10005],p[100005];
int dp[10005][3];
int main()
{
	
	int n;
	cin>>n;
	for(int i = 1; i <= n;i++){
		cin>>x[i];
		cin>>p[i];
	}
	memset(dp,0,sizeof(dp));


	for(int i = 1; i <= n; i++){
            dp[i][0] = max(dp[i-1][0], max(dp[i-1][1], dp[i-1][2]));
            if(i == 1 || x[i]-p[i] > x[i-1]) dp[i][1] = max(dp[i-1][0], dp[i-1][1])+1;
            else dp[i][1] = 0;
            if(x[i]-p[i] > x[i-1]+p[i-1]) dp[i][1] = max(dp[i][1], dp[i-1][2]+1);
            if(i == n || x[i]+p[i] < x[i+1]) dp[i][2] = max(dp[i-1][0], max(dp[i-1][1], dp[i-1][2]))+1;
            else dp[i][2] = 0;
    	}
    cout<<(max(dp[n][0], max(dp[n][1], dp[n][2])))<<"\n";
	return 0;
}