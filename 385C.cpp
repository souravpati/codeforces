#include<bits/stdc++.h>
using namespace std;

const int S = 1e7+5;
int a[S],p[S];
bool mark[S];

int main(){

	int n,x;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		a[x]++;
	}
	
	
	for(int i=2;i<S;i++){
		p[i]=p[i-1];
		if(!mark[i]){
			
			for(int j=i;j<S;j+=i){
				p[i]+=a[j];
				mark[j]=true;
			}
		}
		
	}
	
	int m,l,r;
	scanf("%d",&m);
	while(m--){
		scanf("%d%d",&l,&r);
		printf("%d\n",p[min(r,S-1)]-p[min(l-1,S-1)]);
	}
	return 0;
}