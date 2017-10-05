#include<bits/stdc++.h>
using namespace std;

vector<int> a,b;

int main()
{
	int n,m,c;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>c;
		a.push_back(c);
	}
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>c;
		b.push_back(c);
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());

	int count =0;
	int j=0;
	for(int i=0;i<n;i++){
		while(j<m && a[i]-b[j]>1)
			++j;
		if(j<m && abs(a[i]-b[j])<=1)
		{
			count++;
			j++;
		}
	}
	cout<<count;
	return 0;
}