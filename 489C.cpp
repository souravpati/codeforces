#include</bits/stdc++.h>
using namespace std;


int main()
{
    int m,s,s1;
    cin>>m>>s1;
    s=s1;
    if(m==1 && s==0){cout<<"0 0";exit(0);}
    for(int i=m;i>0;i--){
        
        for(int j=0;j<=9;j++){
            if(i==m && j==0)j++;
            if(s-j<0){cout<<"-1 -1";exit(0);}
            if((s-j)>9*(i-1))continue;
            cout<<j;
            s-=j;
            break;
        }

    }
    if(s!=0) {cout<<"-1 -1";exit(0);}
    cout<<" ";
    s=s1;
    for(int i=m;i>0;i--){
        
        for(int j=9;j>=0;j--){
            if((s-j)>=0){ cout<<j;s-=j;break;}

        }
    }
    return 0;
}