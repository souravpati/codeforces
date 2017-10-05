#include</bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    ll n;
    cin>>n;
    if(n%2==0)cout<<n/2;
    else cout<<((-1)*(n+1)/2);
    return 0;
}