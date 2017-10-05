#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin>>n;
	int a[105]={0};
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(n%2==0){
		cout<<"No";
		return 0;
	}
	

	if(a[0]%2==0 || a[n-1]%2==0){
		cout<<"NO";
		return 0;
	}
	
	
	cout<<"Yes";
	return 0;
}