#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=t+1;i<=9050;i++){
		int th=i/1000;
		int hun = (i/100)%10;
		int ten = (i/10)%10;
		int one = i%10;
//		cout<< th <<" "<< hun<<" " <<ten<<" "<<one;
		if(th==hun || th == ten || th == one || hun == ten || hun == one || ten == one)continue;
		else{
			cout << i;
			break;
		}
	}
	return 0;
}