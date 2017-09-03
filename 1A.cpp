#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,m,a;
	cin>>n>>m>>a;
	cout<<(long long int)(ceil(n*1.0/a)*ceil(m*1.0/a));
	return 0;
}