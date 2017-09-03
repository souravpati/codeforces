#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i;
	cin>>n;
	vector<int> v;
	if(n==0){
		cout<<"a";
		return 0;
	}
	while(n>0){
		for(i=1;i*(i+1)/2<=n;i++){}
		v.push_back(i);
		
		n-=i*(i-1)/2;
	}

	for(int i =0; i<v.size();i++){
		for(int j=1;j<=v[i];j++){
			cout<<char('a'+i);
		}
	}
	return 0;
}