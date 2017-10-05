#include<bits/stdc++.h>
using namespace std;



int n, a[200004];
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int MIN=a[1]-a[0],c=1;

	for(int i=2;i<n;i++){
		if(a[i]-a[i-1]==MIN)
			c++;
		else if(a[i]-a[i-1]<MIN){
			c=1;
			MIN=a[i]-a[i-1];
		}
	}
	cout<<MIN<<" "<<c;
	return 0;
}