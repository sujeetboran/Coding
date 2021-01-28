#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int a,ans=1,rem=0,b,m=1000000007;
    cin>>a;
    b=a/3;
    rem=a%3;
    if(rem==1)
    {
        b--;
        ans=4;
    }
    else if(rem==2)
        ans=2;
    else;
    if(a<=4)
    {
        cout<<a<<"\n";
        return;
    }
    a=3;
    while(b>0)
    {
        if(b&1)
            ans=(ans*a)%m;
        a=(a*a)%m;
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
