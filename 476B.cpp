#include<bits/stdc++.h>
using namespace std;

int fact(int a){
	if(a==0) return 1;
	return (fact(a-1)*a);
}

int main(){
	int sum=0,a=0;
	string s1,s2;
	cin>>s1>>s2;
	for(int i=0;i<s1.length();i++){
		if(s1[i]=='+')sum++;
		else sum--;
	}
	for(int i=0;i<s2.length();i++){
		if(s2[i]=='+')sum--;
		if(s2[i]=='-')sum++;
		if(s2[i]=='?')a++;
	}
	if(abs(sum)>a)cout<<0<<"\n";
	else if(sum==0 && a==0) cout<<1<<"\n";
	else{
		double b = 1.0* fact(a)/ (fact((a+sum)/2)*fact((a-sum)/2));
	//	cout<<a<<" "<<b<<" ";
		printf("%.9lf",b/(1.0*pow(2,a)));
		cout<<"\n";
	}
	
	return 0;
}