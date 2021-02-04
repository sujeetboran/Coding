#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
#define mod 1000000007
void multiply(ll f[2][2],ll m[2][2])
{
    ll a,b,c,d;
    a=((f[0][0]*m[0][0])%mod+(f[0][1]*m[1][0])%mod)%mod;
    b=((f[0][0]*m[0][1])%mod+(f[0][1]*m[1][1])%mod)%mod;
    c=((f[1][0]*m[0][0])%mod+(f[1][1]*m[1][0])%mod)%mod;
    d=((f[1][0]*m[0][1])%mod+(f[1][1]*m[1][1])%mod)%mod;
    f[0][0] = a;
    f[0][1] = b;
    f[1][0] = c;
    f[1][1] = d;
}
void power(ll f[2][2],ll n)
{
    if(n==0 || n==1)
        return;
    ll m[2][2]={{1,1},{1,0}};
    power(f, n / 2);
    multiply(f, f);
     
    if (n % 2 != 0)
        multiply(f, m);
}
void solve()
{   
    ll n,m;
    cin>>n>>m;
    ll f[2][2]={{1,1},{1,0}};
    ll a[2][2]={{1,1},{1,0}};
    power(f,n);
    power(a,m+1);
    if(n==0 || n==1)
    {
        cout<<(a[0][0]-1)%mod<<"\n";
        return;
    }
    cout<<(a[0][0]%mod-f[0][0]%mod+mod)%mod<<"\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
