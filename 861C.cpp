#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	
	string s;
	cin>>s;
	int c=0;
	//int k[3005];
	for(int i=0;i<s.length();i++){
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
			cout<<s[i];
			c=0;
			//k[i]++;
		}
		else{
			c++;
			if(c==3){
				if(s[i]==s[i-1] && s[i]==s[i-2] ){
					cout<<s[i];
					c--;
				}
				else{
					cout<<" "<<s[i];
					c=1;
				}
			} 
			else
				cout<<s[i];
			

			
		}
	}
	return 0;
}