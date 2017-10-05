#include<bits/stdc++.h>
using namespace std;
#define ll long long
int k[105];
vector<int> floors;
int main(){
	int n,m,x,y;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>x>>y;
		k[x]=y;
		
	}
	// for(int i=1;i<10;i++){
	// 	cout<<k[i];
	// }
	
	int s=0;
	for(int i=1;i<=100;i++){
		int flag=0;
		for(int j=1;j<=100;j++){
			//cout<<(j-1/i)+1<<"\n";
			if((((j-1)/i)+1)==k[j] || k[j]==0)continue;
			else {
				flag=1;
				//cout<<i<<j<<"\n";
				break;
			}
		}

		if(flag==0 && s==0)s=((n-1)/i)+1;
		if(flag==0 && s!=((n-1)/i)+1){
			cout<<-1;
			return 0;
		}
	}
	cout<<s;
	
	
	return 0;
}