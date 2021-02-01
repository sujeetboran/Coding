#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int n,m,x,ans=1;
    cin>>n>>m>>x;
    while(m>0)
    {
        if(x&1)
            ans=(ans*n)%x;
        n=(n*n)%x;
        m>>=1;
    }
    cout<<ans<<"\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
