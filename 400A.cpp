#include<bits/stdc++.h>
using namespace std;


vector < pair <int,int> >v;
int main(){
	string s;
	int n;
	cin>>n;

	while(n--){
		v.clear();
		cin>>s;
		for(int i=1;i<=12;i++){
			if(12%i==0){
				for(int j=0;j<12/i;j++){
					int flag=1;
					for(int k=j;k<12;k+=12/i)
						if(s[k]!='X') flag=0;
					if(flag){
						v.push_back({i,12/i});
						break;
					}

				}
			}

		}
		cout<<v.size();
		for(int i=0;i<v.size();i++){
			cout<<" "<<v[i].first<<"x"<<v[i].second;
		}
		cout<<"\n";
	}
	return 0;
}