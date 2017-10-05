#include<bits/stdc++.h>
using namespace std;

#define ll long long


int a[1005],n;


int check(double k){
	int flag=0,pos=-1;
	for(int i=2;i<=n;i++){
		if(a[i]-a[1] == k*(i-1))continue;
		flag=1;
		if(pos<0)pos=i;
		else if(a[i]-a[pos]!=k*(i-pos)){
			flag=0;
			break;
		}
		
	}
	return flag;
}

int main(){
	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	double k1=a[2]-a[1], k2=a[3]-a[2], k3= 0.5*(a[3]-a[1]);
	if(check(k1) || check(k2) || check(k3)){
		cout<<"Yes";
	}
	else cout<<"No";

	return 0;
}