#include</bits/stdc++.h>
using namespace std;
string s;
int main(){
	ios::sync_with_stdio(0);
	cin>>s;
	int p=s.length()-1;
	for(int i=0;i<s.length();i++){
		if(s[i]=='0'){p=i;break;}
	}
	for(int i=0;i<s.length();i++){
		if(p!=i)
			cout<<s[i];
	}
	return 0;
}