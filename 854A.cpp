#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=n/2;i>0;i--){
		int j=n-i;
		if(__gcd(i,j)==1){
			cout<<i<<" "<<j;
			return 0;
		}
	}
	return 0;
}