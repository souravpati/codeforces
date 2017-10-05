#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	int s=0;
	int charge=a>b?1:0;
	while(a>0 && b>0){
		if(a==1 && b==1) break;
		s++;
//		cout<<a<<" "<<b<<endl;
		if(charge==0){
			a++;
			b-=2;
		}
		else{
			b++;
			a-=2;
		}
		if(a<=2) charge =0;
		if(b<=2) charge = 1;
	}
	cout<<s<<endl;
	return 0;
}