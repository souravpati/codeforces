#include<bits/stdc++.h>
using namespace std;


int l,r;

int main(){
	int n,k,ans=0;
	cin>>n;
	int li[n],ri[n];
	for(int i=0;i<n;i++){
		cin>>li[i]>>ri[i];
		l+=li[i];
		r+=ri[i];
	}
	int m=abs(l-r);
//	cout<<m<<" ";
	for(int i=0;i<n;i++){
		int k=abs((l-li[i]+ri[i])-(r-ri[i]+li[i]));
//		cout<<k<<" ";
		if(k>m){
			ans=i+1;
			m=k;
		}
	}
	cout<<ans<<"\n";
	return 0;
}