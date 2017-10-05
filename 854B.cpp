#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n,c=0,ans=0;
	string s;
	cin>>n;
	cin>>s;
	int p[26]={0};
	for(int i=0;i<n;i++){
		if(isupper(s[i])){
			c=0;
			memset(p,0,sizeof(p));
		}

		else{
			int x=s[i]-'a';
			if(p[x]==0)
				c++;
			p[x]++;
			ans=max(ans,c);
		}

	}
	cout<<ans;
	return 0;
}