#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int a,b,ans=1;
    cin>>a>>b;
    while(b>0)
    {
        if(b&1)
            ans=(ans*a)%10;
        a=(a*a)%10;
        b>>=1;
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
