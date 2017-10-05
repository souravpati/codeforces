#include<bits/stdc++.h>
using namespace std;

priority_queue<pair<int,int>> v;
long long ans,sum;
int main(){
	int n, k,x; cin >> n >> k;
	int z[n+1];
    for(int i=0;i<n+k;i++){
    	if(i<n){
    		cin>>x;
    		sum+=x;
    		v.push({x,i});
    	}
    	if(i>=k){
    		sum-=v.top().first;
    		z[v.top().second]=i+1;
    		v.pop();
    	}
    	ans+=sum;
    }
    cout<<ans<<"\n";
    for(int i=0;i<n;i++){
    	cout<<z[i]<<" ";
    }



	return 0;
}