#include<bits/stdc++.h>
using namespace std;


int n;
int A[100005];
int l[100005],r[100005];

int main()
{

	ios::sync_with_stdio(false);

    while(cin>>n)
    {
        for(int i=0;i<n;++i)
            cin>>A[i];
        l[0]=1;
        for(int i=1;i<n;++i)
        if(A[i]>A[i-1])
            l[i]=l[i-1]+1;
        else
            l[i]=1;
        r[n-1]=1;
        for(int i=n-2;i>=0;--i)
            if(A[i]<A[i+1])
                r[i]=r[i+1]+1;
            else r[i]=1;

        int ans=1;
        for(int i=0;i<n-1;++i)
        ans=max(ans,l[i]+1);
        for(int i=1;i<n;++i)
        ans=max(ans,r[i]+1);
        for(int i=1;i<n-1;++i)
        if(A[i+1]-A[i-1]>1)
            ans=max(ans,l[i-1]+r[i+1]+1);
        cout<<ans<<endl;
    }
  	return 0;
}
