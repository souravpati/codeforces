#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back


int main(){
	int n,i;
	cin>>n;
	for(i=1;i*i<n;i++){

	}
	int j=i-(i*i-n)/i;
	cout<<2*(i+j);
	return 0;
}