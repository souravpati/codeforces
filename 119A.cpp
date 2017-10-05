#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,n,flag=0,x;

	cin>>a>>b>>n;

	while(n>=0){
		if(n==0){
			flag=1;
			break;
		}
		x=__gcd(a,n);
		if(x<=n){
			n-=x;
		}
		else{
			flag =1;
			break;
		}
		if(n==0)
			break;
		x=__gcd(b,n);
		if(x<=n){
			n-=x;
		}
		else
			break;
	}
	if(flag==1){
		cout<<1;
	}
	else
		cout<<0;
	return 0;
}