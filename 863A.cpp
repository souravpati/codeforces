#include<bits/stdc++.h>
using namespace std;

int main(){
	string x,y="";
	cin>>x;
	int flag=0,c=0;
	for(int i=x.length()-1;i>=0;i--){
		if(flag==0 && x[i]=='0'){
			c++;
			continue;
		}
		else{
			flag=1;
			y+=x[i];
		}
	}
	//cout<<y;
	if(x.compare(0,x.length()-c,y)==0)
		cout<<"YES";
	else
		cout<<"NO";
}