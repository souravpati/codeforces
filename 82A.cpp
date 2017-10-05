#include<bits/stdc++.h>
using namespace std;

int main(){
	int j=1,n,found=0,i;
	cin>>n;
	for(i=1;(i+5*j)<=n;j+=j){
		i+=5*j;
	}
	for(int k=i;k<=n;k+=j){
		found++;
	}
	if(found==1)
		cout<<"Sheldon";
	if(found==2)
		cout<<"Leonard";
	if(found==3)
		cout<<"Penny";
	if(found==4)
		cout<<"Rajesh";
	if(found==5)
		cout<<"Howard";
	return 0;
}