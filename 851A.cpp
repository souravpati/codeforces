#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll ax,ay,bx,by,cx,cy;
	cin>>ax>>ay>>bx>>by>>cx>>cy;
	ll ab=(ay-by)*(ay-by)+(ax-bx)*(ax-bx);
	ll bc = (cy-by)*(cy-by)+(cx-bx)*(cx-bx);
	ll ac=(ay-cy)*(ay-cy)+(ax-cx)*(ax-cx);
//	cout<<ab<<ac<<bc;
	if(ac!=4*bc){
		if(ab==bc)
			cout<<"Yes"<<"\n";
		else
			cout<<"No\n";
	}
	else cout<<"No\n";
	return 0;
}