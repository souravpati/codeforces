#include<bits/stdc++.h>
using namespace std;

int dp[100004];

int main(){
	string s;
	cin>>s;
	dp[1] = (s[0]==s[1]) ? 1 : 0;
	for(int i=1;i<s.length()-1;i++){
		int b = (s[i]==s[i+1])? 1 : 0;
		dp[i+1] = dp[i]+b;

	}
	int l,r,n;
	cin>>n;
	while(n--){
		cin>>l>>r;
		l--;
		r--;
		cout<<dp[r]-dp[l]<<"\n";
	}

	return 0;
}