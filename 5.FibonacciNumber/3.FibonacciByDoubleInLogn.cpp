#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
#define mod 1000000007
pair<ll,ll>fib(ll n)
{
    if(n==0)
        return {0,1};
    pair<ll,ll> p=fib(n>>1);
    ll c=(p.first*(2*p.second-p.first)%mod)%mod;
    ll d=((p.first*p.first)%mod+(p.second*p.second)%mod)%mod;
    if(n&1)
        return {d,c+d};
    return {c,d};
}
void solve()
{   
    ll n;
    cin>>n;
    pair<ll,ll> ans=fib(n);
    cout<<ans.first;
    cout<<"\n";
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
