#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main(){
	int n,b=1,ans=1;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i>0){
			if(a[i]>a[i-1]) b++;
			else b=1;
			ans=max(ans,b);
		}
	}
	cout<<ans<<"\n";
	return 0;
}