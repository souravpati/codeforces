#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(int)(n);++(i))
int a[105],b[105],n;


vector<int> v;
int main(){
	cin>>n;

	for(int i=0;i<2*n;i++){
		cin>>a[i];
	}
	sort(a,a+2*n);
	int ans=INT_MAX;
	rep(i,2*n) 
		for(int j=i+1;j<2*n;j++){
			int p=-1,sum=0;
			rep(k,2*n){
				if(k==i || k==j)
					continue;
				if(p==-1){
					p=a[k];
				}
				else{
					sum +=a[k]-p;
					p=-1;
				}

			}
			ans=min(ans,sum);
		}
	cout<<ans;
	return 0;
}