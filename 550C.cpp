#include</bits/stdc++.h>
using namespace std;
string s;
int a[105];
int main(){
	ios::sync_with_stdio(0);
	cin>>s;
	int n=s.length();
	for(int i=0;i<n;i++){
		a[i]=s[i]-'0';
		if(a[i]%8==0){
			cout<<"YES\n"<<a[i];
			return 0;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if((a[i]*10+a[j])%8==0){
				cout<<"YES\n"<<a[i]*10+a[j];
				return 0;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int k=j+1;k<n;k++){
				if((a[i]*100+a[j]*10+a[k])%8==0){
					cout<<"YES\n"<<a[i]*100+a[j]*10+a[k];
					return 0;
				}
			}
		}
	}
	cout<<"NO";
	return 0;
}