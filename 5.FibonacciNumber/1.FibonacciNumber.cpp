#include<bits/stdc++.h>
using namespace std;
void solve()
{
    unsigned long long int n,a=0,b=1,ans=1;
    cin>>n;
    while(n>1)
    {
        ans=(a+b);
        a=b;
        b=ans;
        n--;
        //cout<<ans<<"  "<<a<<"  "<<b<<"\n";
    }
    if(n==0)
        cout<<0<<"\n";
    else
        cout<<ans<<"\n";
    return;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
