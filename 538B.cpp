#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int m=0;
	for(int i=0;i<s.length();i++){
		if(s[i]-'0'>m) m=s[i]-'0';

	}
	cout<<m<<"\n";
	for(int i=0;i<m;i++)
	{
		int flag=0;
		for(int j=0;j<s.length();j++){
			if(i<s[j]-'0'){flag=1;cout<<'1';}
			if(i>=s[j]-'0' && flag==1)cout<<"0";
		}
		cout<<" ";
	}
	cout<<"\n";
	return 0;
}