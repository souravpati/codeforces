#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,ans=0;
    cin>>n;
    int s[5]={0};
    for(int i=0;i<n;i++){
        cin>>a;
        s[a]++;
    }
    ans+=s[4]+s[3]+s[2]/2;
    if(s[2]%2==1){ans++;s[1]-=2;}
    s[1]= s[1] - s[3];
    if(s[1]>0)ans+=ceil(s[1]*1.0/4);
    cout<<ans;
    return 0;
}