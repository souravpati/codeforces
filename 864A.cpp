#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n,x,a[101]={0},c=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		a[x]++;
	}
	int p=0;
	for(int i=0;i<=100;i++){
		if(a[i]>0){
			if(p==0)
				p=a[i];
			else if(p!=a[i])
				c+=5;
			c++;
		}
	}
	//cout<<c;
	if(c==2){
		cout<<"YES"<<"\n";
		for(int i=0;i<=100;i++){
			if(a[i]>0)
			cout<<i<<" ";
		}
	}
	else
		cout<<"NO";
	return 0;
}