#include</bits/stdc++.h>
using namespace std;
int a[105];

int main()
{
    int n,sum=0;
    cin>>n;
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int zer=0,one=0;
            for(int k=i;k<=j;k++){
                if(a[k]==1) one++;
                else zer++;
            }
            ans = max(ans,sum-one+zer);
        }

    }
    cout<<ans<<"\n";
    return 0;
}